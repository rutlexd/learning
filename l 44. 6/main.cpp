#include <iostream>
using namespace std;
int amountAccounts = 0;
int globalBalance = 0;
int userEnt;
void check();
int enterUser(){
    int userE;
    cin >> userE;
    return userE;
    
}

void showMenu(){
    cout<<R"(        1 - create new account
        2 - deposit
        3 - with draw
        4 - show info
        0 - exit
        
        )";
    userEnt = enterUser();
    check();
}

void createAccount(){
    cout<<"\n\tEnter start deposit\n\t";
    int dep;
    cin>>dep;
    globalBalance += dep;
    amountAccounts++;
    showMenu();
}

void deposit(){
    cout<<"\n\tHow much u deposit?\n\t";
    int dep;
    cin>>dep;
    globalBalance +=dep;
    showMenu();
}

void withDraw(){
    cout<<"\n\tHow much u with draw?\n\t";
    int dep;
    cin>>dep;
    if(dep<=globalBalance){
        globalBalance -= dep;
    }
    else{
        cout<<"\n\tU don't have "<<dep<<"$\n\t";
    }
    showMenu();
}

void showInfo(){
    cout<<"\n\tBalance - "<<globalBalance<<"\n\tAccounts - "<<amountAccounts<<endl;
    showMenu();
}

void check(){
    if(userEnt == 1){
        createAccount();
    }
    else if(userEnt == 2){
        deposit();
    }
    else if(userEnt == 3){
        withDraw();
    }
    else if(userEnt == 4){
        showInfo();
    }
}

int main(){
    createAccount();
}
