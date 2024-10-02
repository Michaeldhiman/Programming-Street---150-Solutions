//  Write a program to keep summing the digits of a number until a single digit is obtained.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    while(number>9){
        int sum=0;
        while(number){
            int digit=number%10;
            number=number/10;
            sum+=digit;
        }
        number=sum;
    }
    cout<<"The sum of digits : "<<number<<endl;
    return 0; 
}