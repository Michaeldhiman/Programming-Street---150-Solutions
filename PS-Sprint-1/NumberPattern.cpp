//  Write a program to generate number patterns (e.g., sequential numbers in a matrix).
// 1  
// 2 3  
// 4 5 6  

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int count=1;
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}