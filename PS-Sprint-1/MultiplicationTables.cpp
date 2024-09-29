// Write a program to generate multiplication tables for a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    for(int i=1;i<=10;i++){
        cout<<number<<" * "<<i<<" is "<<number*i<<endl;
    }
    return 0;
}