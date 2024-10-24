// Print a pyramid pattern with increasing numbers.

//   1
//  232
// 34543
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        count-=2;
        for(int j=i-1;j>=1;j--){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }

    return 0;
}