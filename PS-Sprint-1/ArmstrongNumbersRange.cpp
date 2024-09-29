// Write a program to find all Armstrong numbers within a given range.

#include<bits/stdc++.h>
using namespace std;
int pow(int digit,int power){
    int ans=1;
    for(int i=1;i<=power;i++){
        ans=ans*digit;
    }
    return ans;
}
bool armstrong(int num){
    int original_num=num;
    int sum=0;
    while(num){
        int digit=num%10;
        num=num/10;
        sum+=pow(digit,3);
    }
    if(sum==original_num) return true;
    else return false;
}
int main(){
    int num1,num2;
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        if(armstrong(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}