#include <cstdio>
#include <string>
#include <ctime>
using namespace std;
string devTime() {
    // Get the current timestamp in seconds since the epoch
    time_t now = time(nullptr);

    // Create a tm structure for July 18, 2023, and set the desired date and time
    tm target_time = {};
    target_time.tm_year = 2023 - 1900; // Years since 1900
    target_time.tm_mon = 6; // Months since January (0-based, so 6 for July)
    target_time.tm_mday = 18; /S Day of the month

    // Get the timestamp for July 18, 2023, in seconds since the epoch
    time_t target_timestamp = mktime(&target_time);

    // Calculate the time difference in seconds
    time_t time_difference = now - target_timestamp;

    // Convert the time difference to days
    int day = (time_difference / 3600)/24;

string days = to_string(day);
string textStudy1 = "U study c++ ";
string textStudy2 = " days";
string res = textStudy1 + days + textStudy2;
return res;
}