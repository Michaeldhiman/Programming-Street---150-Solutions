// Print a diamond pattern with stars (*)
// n=3;
//   *
//  ***
// *****
//  ***
//   *

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of row: ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<2*i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=row-1;i>=1;i--){
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<2*i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}