// Write a program to create different star patterns
//     *
//    ***
//   *****
//  *******
// *********

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    for(int i=1;i<=number;i++){
        for(int j=1;j<=number-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<2*i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}