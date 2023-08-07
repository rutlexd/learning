#include <chrono>
#include <ctime>
#include <string>
using namespace std;
string devTime()
{
 setlocale(LC_ALL, "ukr");

    time_t t = time(nullptr);
    tm* now = localtime(&t);
 
 int dayF, mounthF, yearF, dayS, mounthS, yesrS, x = 0, y = 0;
 int leap, k;
 int mounths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

dayF = 18;
mounthF = 7;
yearF = 2023;
dayS = now->tm_mday;
mounthS = now->tm_mon + 1;
yesrS = now->tm_year + 1900;

//высчитываем сколько было высокосных лет в заданном интервале
leap = yearF;
k = 0;
while (leap <= yesrS)
{

 if (leap % 4 == 0 && leap % 100 != 0 || leap % 400 == 0)
 {
  k = k + 1;
 }

 leap++;

}


//высчитываем сколько прошло дней в году до начальной даты
for(int i =1; i<=12;i++){
    if(i == mounthF){
        for(int j = 2;j<mounthF+1;j++){
            x += mounths[j-1];
        }
        x += dayF;
    }
}



//высчитываем сколько прошло дней в году до конечной даты
for(int i =1; i<=12;i++){
    if(i==mounthS){ 
        for(int j = 2;j<mounthS+1;j++){
            y += mounths[j-1];
        }
    y += dayS;
    }
}
if ((yearF % 4 == 0 && leap % 100 != 0 || leap % 400 == 0)&&mounthF>2) { k = k - 1;} //если начальная дата высокосный год больше 29 февраля то отнимаем 1 от кол-во высокосных лет
if ((yesrS % 4 == 0 && leap % 100 != 0 || leap % 400 == 0) && dayS<=29&&mounthS<3) { k = k - 1;} //если конечная дата до 29 февраля то отнимаем 1 от высокосных лет
int resultTime = 0;
if (yearF == yesrS)
{
 resultTime = (y - x)+k; 
}
else
resultTime = (yesrS - yearF) * 365 + ((y - x)+k);
string days = to_string(resultTime);
string textStudy1 = "U study c++ ";
string textStudy2 = " days";
string res = textStudy1 + days + textStudy2;
return res;
}
