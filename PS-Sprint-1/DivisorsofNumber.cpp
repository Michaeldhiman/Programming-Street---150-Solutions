// Write a program to find all divisors of a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
            if(num/i!=i){
            cout<<num/i<<" ";
            }
        }
    }
    return 0;
}