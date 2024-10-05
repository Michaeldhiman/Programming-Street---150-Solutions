// Write a program to find the sum of the prime factors of a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int sum=0;
    for(int i=2;num>1;){
        if(num%i==0){
          sum+=i;
          num=num/i;
        }else{
            i++;
        }
    }
    cout<<"sum is: "<<sum<<endl;
    
    return 0;
}