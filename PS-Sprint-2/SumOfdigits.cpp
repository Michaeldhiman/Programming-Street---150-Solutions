// Write a program to repeatedly sum the digits of a number until the result is zero.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int sum=0;
    while(num){
        int digit=num%10;
        sum+=digit;
        num=num/10;
    }
    cout<<"Sum of digits is : "<<sum<<endl;
    return 0;
}