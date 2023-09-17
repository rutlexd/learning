#include <iostream>
using namespace std;
int main(){
const int size = 30;
int numbers[size];
int first = 0;
int second = 1;
int sum = 0;
for(int i = 0;i<size;i++){ // Fibonacci numbers 
    sum = first + second;
    numbers[i] = sum;
    second = sum - second;
    first = sum;
}
for(int i = 0;i<size;i++){
    cout<<numbers[i]<<" ";
}
}
