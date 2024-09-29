
// Write a program to find the sum of all odd numbers within a given range.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the Two numbers:";
    cin>>num1>>num2;
    int sum=0;
    for(int i=num1;i<=num2;i++){
        if(i&1){
            sum+=i;
        }
    }
    cout<<"Sum is"<<sum<<endl;
    return 0;
}