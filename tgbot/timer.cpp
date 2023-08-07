#include <iostream>
#include <chrono>
#include <ctime>
#include <chrono>
#include <string>
using namespace std;
string devTime()
{
 setlocale(LC_ALL, "ukr");

    time_t t = time(nullptr);
    tm* now = localtime(&t);
 



 
 int a, b, c, d, e, f, x = 0, y = 0;
 int leap, k;
 int sets[12] = {31,28,31,30,31,30,31,31,30,31,30,31};


a = 18;
b = 7;
c = 2023;
d = now->tm_mday;
e = now->tm_mon + 1;
f = now->tm_year + 1900;

//высчитываем сколько было высокосных лет в заданном интервале
leap = c;
k = 0;
while (leap <= f)
{

 if (leap % 4 == 0 && leap % 100 != 0 || leap % 400 == 0)
 {
  k = k + 1;
 }

 leap++;

}


//высчитываем сколько прошло дней в году до начальной даты
for(int i =1; i<=12;i++){
    if(i == b){
        for(int j = 2;j<b+1;j++){
            x += sets[j-1];
        }
        x += a;
    }
}



//высчитываем сколько прошло дней в году до конечной даты
for(int i =1; i<=12;i++){
    if(i==e){ 
        for(int j = 2;j<e+1;j++){
            y += sets[j-1];
        }
    y += d;
    }
}
if ((c % 4 == 0 && leap % 100 != 0 || leap % 400 == 0)&&b>2) { k = k - 1;} //если начальная дата высокосный год больше 29 февраля то отнимаем 1 от кол-во высокосных лет
if ((f % 4 == 0 && leap % 100 != 0 || leap % 400 == 0) && d<=29&&e<3) { k = k - 1;} //если конечная дата до 29 февраля то отнимаем 1 от высокосных лет
int resultTime = 0;
if (c == f)
{
 resultTime = (y - x)+k; 
}
else
resultTime = (f - c) * 365 + ((y - x)+k);
string days = to_string(resultTime);
string textStudy1 = "U study c++ ";
string textStudy2 = " days";
string res = textStudy1 + days + textStudy2;
return res;
}
