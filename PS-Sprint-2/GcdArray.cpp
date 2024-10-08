// Write a program to find the GCD (Greatest Common Divisor) of an array of numbers.

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int ans=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<" Element :";
        cin>>arr[i];
    }
    int val=1;
    if(size==1){
        val=arr[0];
    }else{
        val=gcd(arr[0],arr[1]);
        for(int i=2;i<size;i++){
            val=gcd(arr[i],val);
        }
    }
    cout<<"The Gcd of number: "<<val<<endl;
    return 0;
}