// Print a square pattern of stars (*).
//n=5
// *****
// *****
// *****
// *****
// *****

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of row: ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}