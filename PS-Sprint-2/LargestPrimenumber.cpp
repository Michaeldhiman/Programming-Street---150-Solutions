// Write a program to find the largest prime factor of a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int ans=1;
    int i=2;
    while(num!=1){
        if(num%i==0){
            while(num%i==0){
                ans=max(ans,i);
                num=num/i;
            }
        }
            i+=2; // as majority prime numbers are odd
    }
    cout<<"Largest prime factor is : "<<ans<<endl;
    return 0;
}