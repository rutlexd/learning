# 6
Створіть програму, яка керує банківськими аккаунтами, використовуючи функції та глобальні змінні.
   Список глобальних констант:

   int accountsCount; -> загальна кількість аккаунтів
   double totalBalance; -> загальний баланс всіх аккаунтів

   Список фунцкій:
   void CreateAccount() -> просить у користувача ввести початковий баланс нового аккаунту. Після
                           введення кількість аккаунтів і загальний баланс збільшується.
   bool Deposit(double money) -> додає указану суму грошей до загального балансу. 
   bool Withdraw(double money) -> віднімає указану суму грошей від загального балансу.
   
   УВАГА: замітьте, що обидві функції повертають тип bool. Діло в тому, що ці операції можуть не спрацювати
          (наприклад сума грошей не коректна, або балансу не хватає, щоб зняти гроші). Врахуйте це.

   void ShowAccountsCount() - виводить на екран кількість створених аккаунтів.
   void ShowTotalBalance() - виводить на екран загальний баланс всіх аккаунтів.

   Створіть файл Bank.cpp. Розмістіть ці змінні і функції в ньому. А у функції main із файлу Main.cpp
   ви будете користуватися цими функціями. Для цього не забудьте їх оголосити.

   У функції main у вас будуть реалізовані свої функції:

   void ShowMenu() - виводить меню із наступних пукнтів:
                     1 - показати загальний баланс,
                     2 - показати кількість аккаунтів,
                     3 - створити новий аккаунт
                     4 - покласти гроші на рахунок
                     5 - зняти гроші з рахунку
                     0 - вихід із програми

   int EnterMenuItem() - функція, яка просить у користувача вибрати пункт меню і повертає це значення.

   У самій функції main має спочатку появитися меню, далі користувач вводить пункт меню. Після цього
   ви аналізуєте цей пункт (завдяки if або switch) і викликаєте відповідну функцію в залежності від
   пункту. Після завершення чергової операції меню має появлятися знову. Іншими словами всі ці алгоритми
   мають находитися в циклі, який завершиться лише тоді, коли користувач захоче вийти із програми (вибравши
   пункт 0).
