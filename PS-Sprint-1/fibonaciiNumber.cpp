// Write a program to find the Fibonacci number at a specific position.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int a=0;
    int b=1;
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<number-1;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    return 0;
}