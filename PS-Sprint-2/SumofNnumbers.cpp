// Write a program to calculate the sum of the first N odd numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int count=1;
    int sum=0;
    int i=1;
    while(count<=number){
        sum+=i;
        i+=2;
        count++;
    }
    cout<<"Sum of first "<<number<<" odd numbers : "<<sum<<endl;
    return 0;
}