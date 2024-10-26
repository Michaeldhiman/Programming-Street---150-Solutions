// Print a checkerboard pattern with two different characters alternating.
// n=4

// XOXOXO
// OXOXOX
// XOXOXO
// OXOXOX

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0){
                cout<<"X ";
            }else{
                cout<<"O ";
            }
        }
        cout<<endl;
    }
    return 0;
}