// Write a program to calculate the power of a number.

#include<bits/stdc++.h>
using namespace std;
int power(int base,int exponent){
    int ans=1;
    for(int i=1;i<=exponent;i++){
        ans=ans*base;
    }
    return ans;
}
int main(){
    int base,exponent;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<endl<<"Enter the Exponent: ";
    cin>>exponent;
    int ans=power(base,exponent);
    cout<<endl<<base<<" raised to the power of "<<exponent<< " is "<<ans;
    return 0;
}