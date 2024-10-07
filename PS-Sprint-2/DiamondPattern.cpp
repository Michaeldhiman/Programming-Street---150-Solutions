// Write a program to create a diamond pattern with stars of a given size.

// for n=5

//   *  
//  ***  
// *****  
//  ***  
//   *  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: ";
    cin>>n;
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<(n/2)+1){
            nst+=2;
            nsp--;
        }else{
            nst-=2;
            nsp++;
        }
    }
    return 0;
}