#include <iostream>
using namespace std;
int main(){
int height;
const int MINIMUM_HEIGHT = 3;
const int MAXIMUM_HEIGHT = 9;
const int max_amount = 6;
bool isInputSuccessful = true;
//Check input
do{
    cout<<"Enter height more than "<<MINIMUM_HEIGHT<<" less than "<<MAXIMUM_HEIGHT<<" and only odd\n";
    cin>>height;
    if(height<MINIMUM_HEIGHT){
        cout<<"Noup\n";
        isInputSuccessful  = false;
    }
    else if(height>MAXIMUM_HEIGHT){
        cout<<"Noup\n";
        isInputSuccessful  = false;
    }
    else if(height % 2 == 0){
        cout<<"Noup\n";
        isInputSuccessful  = false;
    }
    else{
        isInputSuccessful = true;
    }
}while(!isInputSuccessful);

int amount;

//Check input amount
do{
    cout<<"Enter amount of rombs(6 is max)";
    cin>>amount;
    if(amount>max_amount){
        cout<<"Noup\n";
        isInputSuccessful  = false;
    }
    else if(amount < 0){
        cout<<"Noup\n";
        isInputSuccessful  = false;
    }
    else{
        isInputSuccessful = true;
    }
}while(!isInputSuccessful);

int firstspace = (height / 2);
int secondspace = (height / 2) + 2;
int innerspace = 0;

for(int row = 0;row<height;row++){

    for(int a = 0; a<amount;a++)//repeat for amount of rombs
    {
        for(int space = 0;space<firstspace;space++){   //painting first side space and star
        cout<<" ";
    }
    cout<<"*";

    if(innerspace > 0){ //check for first row
        
        for(int space = 0;space<innerspace;space++){ //painting inner space and star
            cout<<" ";
        }
        cout<<"*";
    }
    for(int space = 0;space<secondspace;space++) //painting second side space
    cout<<" ";
    }
    
    cout<<endl;
    
    if(row < height / 2){ //in first romb's part
        firstspace -= 1;
        secondspace -= 1;
        if(row == 0)
        {
            innerspace += 1;
            
        }
        else
        {
            innerspace += 2;
        }
    }
    else{//in second romb's part
        firstspace += 1;
        secondspace += 1;
        innerspace -=2;
    }
}
}
