// Write a program to find the sum of the digits of the factorial of a given number.

#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}
int sum(int num){
    int ans=0;
    while(num){
        int digit=num%10;
        ans+=digit;
        num/=10;
    }
    return ans;
}
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int factorial=fact(number);
    int ans=sum(factorial);
    cout<<"Sum of Digits of factorial of number is: "<<ans<<endl;
    return 0;
}