// Write a program to check if a number is an Armstrong number.

#include<bits/stdc++.h>
using namespace std;
int pow(int digit,int power){
    int ans=1;
    for(int i=1;i<=power;i++){
        ans=ans*digit;
    }
    return ans;
}
int main(){
    int number;
    cout<<"Enter the Number:";
    cin>>number;
    int original_num=number;
    int sum=0;
    while(number){
        int digit=number%10;
        int ans=pow(digit,3);
        sum+=ans;
        number=number/10;
    }
    if(sum==original_num){
        cout<<original_num<<" is Armstrong Number";
    }else{
        cout<<original_num<<" is Not Armstrong Number";
    }
    return 0;
}