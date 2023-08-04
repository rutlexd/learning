#include <iostream>
void random(int arr[],const int SIZE, int min, int max){
   int a = max - min;
   srand(time(0));
    for(int i =0; i < SIZE;i++){
        arr[i] = (rand() % a) + min;
    }
 }
 
 void show(int arr[], const int SIZE){
    for(int i = 0; i < SIZE;i++){
        std::cout<<arr[i]<<" ";
    }
 }

 int main(){
    const int size = 10;
    int numbers[size] = {};
    std::cout<<"Enter min,max\n";
    int min,max,temp;
    std::cin>>min >> max;
    if(min>max){
      temp = min;
      min = max;
      max = temp;
    }
    random(numbers, size, min , max);
    show(numbers, size);
 }
  
