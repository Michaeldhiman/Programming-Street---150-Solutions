// Write a program to find the sum of the squares of the digits of a number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int sum=0;
    while(number){
        int digit=number%10;
        number=number/10;
        sum+=(digit*digit);
    }
    cout<<"The sum of the squares of digits is :"<<sum<<endl;
    return 0;
}