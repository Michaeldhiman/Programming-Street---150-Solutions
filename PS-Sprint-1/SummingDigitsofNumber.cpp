// Write a program to calculate the sum of digits of a number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int sum=0;
    while(number){
        int digit=number%10;
        sum+=digit;
        number=number/10;
    }
    cout<<"Sum of digit of number is:"<<sum<<endl;
    return 0;
}