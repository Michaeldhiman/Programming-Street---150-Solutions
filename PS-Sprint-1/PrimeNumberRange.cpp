//  Write a program to find all prime numbers within a given range.

#include<bits/stdc++.h>
using namespace std;
bool prime(int num){
    bool flag=true;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=false;
            break;
        }
    }
    if(flag) return true;
    else return false;
}
int main(){
    int num1,num2;
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        if(prime(i)) cout<<i<<" ";
    }
    return 0;
}