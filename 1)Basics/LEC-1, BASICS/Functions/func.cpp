#include<iostream>
using namespace std;
//void func -> doesnt return anything

void printName(string name){
    cout <<"Hello "<< name;
}

int main(){
    string name;
    cin >> name;
    printName(name);
    return 0;
}
