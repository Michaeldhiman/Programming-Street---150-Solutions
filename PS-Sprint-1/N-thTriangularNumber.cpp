// Write a program to find the N-th triangular number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int sum=0;
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    cout<<"The " <<number<<" th triangular number is "<<sum;
    return 0;
}