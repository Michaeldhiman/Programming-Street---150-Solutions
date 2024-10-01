// Write a program to count the number of digits in a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int count=0;
    while(number){
        count++;
        number=number/10;
    }
    cout<<"Number of Digits are: "<<count<<endl;

    return 0;
}