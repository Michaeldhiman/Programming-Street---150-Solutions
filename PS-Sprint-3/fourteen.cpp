// Print a pattern where each row has an increasing width of stars.
// n=3

// *
// ***
// *****

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
