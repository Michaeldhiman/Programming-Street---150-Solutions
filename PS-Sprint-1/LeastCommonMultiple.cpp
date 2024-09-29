// Write a program to find the LCM of two numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter Two number:"<<endl;
    cin>>num1>>num2;
    int ans=max(num1,num2);
    while(ans%num1!=0 || ans%num2!=0){
        ans++;
    }
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<ans<<endl;
   
    return 0;
}