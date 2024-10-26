// Print a matrix of consecutive numbers starting from 1, filling rows sequentially.

// 1 2 3
// 4 5 6
// 7 8 9

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int num=(i-1)*3;
        for(int j=1;j<=n;j++){
            cout<<num+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}