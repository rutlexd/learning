#include <iostream>
using namespace std;
int main(){
    int shops[2][3];
    int num;
    for(int i = 0,a = 1;i<2;i++){
        string shop;
        if(a == 1){
            shop = "JustBuy";
        }
        else if( a == 2){
            shop = "At All Costs";
        }
        for(int j = 0,b = 1;j<3;j++,b++){
            string fruits;
            if(b == 1){
                fruits = "orange";
            }
            else if(b==2){
                fruits = "apple";
            }
            else if(b==3){
                fruits =  "banana";
            }
            cout<<"Enter amount of "<<fruits<<" to "<<shop<<" ";
            cin>>num;
            shops[i][j] = num;
            
        }
        a++;
    }
    for(int i = 0,a = 1;i<2;i++,a++){
        string shop , fruits;
        if(a==1){
            shop = "JustBuy";
        }
        else{
            shop = "At All Costs";
        }
        cout<<"\nShop - \""<<shop<<"\" had:\n";
        for(int j = 0,b = 1;j<3;j++,b++){
            if(b == 1){
                fruits = "orange";
            }
            else if(b==2){
                fruits = "apple";
            }
            else if(b==3){
                fruits =  "banana";
            }
            cout<<fruits<<" - "<<shops[i][j]<<endl;
        }
    }
}