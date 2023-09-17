#include <iostream>
using namespace std;

const double PI = 3.14159;
double calcArea(double R){
   double result;
   result = PI * (R * R);
   return result;
}
double calcLenght(double R){
   double result;
   result = 2* PI * R;
   return result;
}
