//Write a program to check if a number is a narcissistic number 
//(where the sum of its digits raised to the power of the number of digits equals the number itself).
#include<bits/stdc++.h>
using namespace std;
int pow(int num,int power){
    int ans=1;
    for(int i=1;i<=power;i++){
        ans=ans*num;
    }
    return ans;
}
int calDigit(int num){
    int count=0;
    while(num){
        count++;
        num/=10;
    }
    return count;
}
bool check(int num,int digit){
    int sum=0;
    int original_num=num;
    while(num){
        int val=num%10;
        sum+=pow(val,digit);
        num/=10;
    }
    if(sum==original_num) return true;
    else return false;
}
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int digits=calDigit(number);
    if(check(number,digits)){
        cout<<"Number is Narcissistic Number";
    }else{
        cout<<"Number is Not Narcissistic Number";
    }
    return 0;
}