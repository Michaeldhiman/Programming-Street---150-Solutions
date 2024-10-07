// Write a program to calculate the sum of the series 1 + 1/2 + 1/3 + ... + 1/n up to the nth term.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    double sum=0.0;
    for(int i=1;i<=num;i++){
        sum+=(double)1/i;
    }
    cout<<"Sum of series : "<<sum<<endl;
    return 0;
}