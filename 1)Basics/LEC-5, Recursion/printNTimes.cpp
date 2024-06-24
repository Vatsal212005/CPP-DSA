#include<iostream>
using namespace std;

void count(int current, int n){
    if(current>n){
        return;
    }
    cout <<current<<" ";
    count(current+1,n);
}

int main(){
    int n;
    cout<<"Enter number:";
    cin >> n;
    count(1,n);
    return 0;
}

