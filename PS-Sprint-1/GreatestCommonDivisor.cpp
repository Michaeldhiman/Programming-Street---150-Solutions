// Write a program to find the GCD of two numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Two number:"<<endl;
    cin>>num1>>num2;
    int ans=0;
    for(int i=1;i<=min(num1,num2);i++){
        if(num1%i==0 && num2%i==0){
            ans=i;
        }
    }
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<ans<<endl;

    return 0;
}