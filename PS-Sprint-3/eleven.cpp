// rint a matrix where elements alternate between 0 and 1

// 0101
// 1010
// 0101
// 1010

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0){
                cout<<"0 ";
            }else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}