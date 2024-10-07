// Write a program to generate multiplication tables for numbers within a specified range.

// 2 x 1 = 2   3 x 1 = 3   4 x 1 = 4  
// 2 x 2 = 4   3 x 2 = 6   4 x 2 = 8  
// 2 x 3 = 6   3 x 3 = 9   4 x 3 = 12  
// 2 x 4 = 8   3 x 4 = 12  4 x 4 = 16  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int start;
    cout<<"Enter the start :";
    cin>>start;
    int end;
    cout<<"Enter the end :";
    cin>>end;
    for(int i=1;i<=10;i++){
        for(int j=start;j<=end;j++){
            cout<<j<<" * "<<i<<" = "<<j*i<<"\t";
        }
        cout<<endl;
    }
    return 0;
}