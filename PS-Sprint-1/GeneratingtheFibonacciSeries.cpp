// Write a program to generate the Fibonacci series up to a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number till where you want:";
    cin>>number;
    int first_num=0;
    int second_num=1;
    cout<<first_num<<" "<<second_num<<" ";
    int sum=first_num+second_num;
    while(sum<number){
        cout<<sum<<" ";
        first_num=second_num;
        second_num=sum;
        sum=first_num+second_num;
    }
    return 0;
}