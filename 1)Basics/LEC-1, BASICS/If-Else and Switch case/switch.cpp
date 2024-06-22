#include<iostream>
using namespace std;
/*
Take the day no and print the corresponding day
for 1 print monday
for 2 print tuesday etc*/
int main(){
    int day;
    cout<<"Enter number: ";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thrusday";
            break;
    }
    return 0;
}