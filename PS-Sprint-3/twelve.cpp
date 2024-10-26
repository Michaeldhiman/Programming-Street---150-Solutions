// Print a Pascal’s Triangle
// n=4
//    1
//   1 1
//  1 2 1
// 1 3 3 1

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int ncr(int i,int j){
    return factorial(i)/(factorial(i-j)*factorial(j));
}
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}