// Write a program to generate a pyramid of numbers

// 1  
// 12  
// 123  
// 1234  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Enter the no of row: ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}