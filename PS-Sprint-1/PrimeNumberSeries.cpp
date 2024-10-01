// Write a program to print all prime numbers less than a given number.

#include<bits/stdc++.h>
using namespace std;
bool check(int num){
    if(num<2) return false;
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    for(int i=1;i<number;i++){
        if(check(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}