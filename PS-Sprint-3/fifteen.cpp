// Print a right-angle triangle pattern using characters.
//n=3

// A
// BB
// CCC

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n :";
    cin>>n;
    for(int i=1;i<=n;i++){
        char ch='a'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}