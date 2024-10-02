// Write a program to generate Pascal's Triangle up to a given number of rows.

// for n=4
// 1  
// 1 1  
// 1 2 1  
// 1 3 3 1  

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int ncr(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}