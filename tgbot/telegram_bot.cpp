#include <stdio.h>
#include <tgbot/tgbot.h>
#include "timer.cpp"

int main() {
    TgBot::Bot bot("");
    bot.getEvents().onCommand("start", [&bot](TgBot::Message::Ptr message) {
        bot.getApi().sendMessage(message->chat->id, "Hi!");
    });
    bot.getEvents().onAnyMessage([&bot](TgBot::Message::Ptr message) {
        printf("User wrote %s\n", message->text.c_str());
        if (StringTools::startsWith(message->text, "/start")) {
            return;
        }
        if (StringTools::startsWith(message->text, "/love")) {
            bot.getApi().sendMessage(message->chat->id, "I love Nadia, kiss u my baby:)");
        }
        if (StringTools::startsWith(message->text, "/study")) {
            bot.getApi().sendMessage(message->chat->id, devTime());
        }
    });
    try {
        printf("Bot username: %s\n", bot.getApi().getMe()->username.c_str());
        TgBot::TgLongPoll longPoll(bot);
        while (true) {
            printf("Long poll started\n");
            longPoll.start();
        }
    } catch (TgBot::TgException& e) {
        printf("error: %s\n", e.what());
    }
    return 0;
}
