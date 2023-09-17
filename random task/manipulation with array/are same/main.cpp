#include <iostream>
bool areSame(const int arr1[],const int size1, const int arr2[], const int size2){
   if(size1 != size2){
      return false;
   }

   for(int i =0;i<size1;i++){
      if(arr1[i] != arr2[i]){
         return false;
      }
   }

   return true;
}

 void show(int arr[], const int SIZE){
    for(int i = 0; i < SIZE;i++){
        std::cout<<arr[i]<<" ";
    }
 }

 int main(){
    const int size1 = 3;
    const int size2 = 3;
    int numbers1[size1] = {1,2,3};
    int numbers2[size2] = {1,2,3};
    show(numbers1,size1);
    std::cout<<std::endl;
    show(numbers2,size2);
    std::cout<<std::endl;
    if(areSame(numbers1,size1,numbers2,size2)){
      std::cout<<"U array is same"<<std::endl;
    }
    else{
      std::cout<<"U array isn't same"<<std::endl;
    }
 }
  
