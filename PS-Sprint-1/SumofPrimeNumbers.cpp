// Write a program to calculate the sum of all prime numbers within a given range.
#include<bits/stdc++.h>
using namespace std;
bool check(int num){
    if(num<2) return false;
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    int num1,num2;
    cout<<"Enter the range:";
    cin>>num1>>num2;
    int sum=0;
    for(int i=num1;i<=num2;i++){
        if(check(i)) sum+=i;
    }
    cout<<"Sum of prime numbers is: "<<sum<<endl;
    return 0;
}