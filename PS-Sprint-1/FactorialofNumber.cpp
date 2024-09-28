// Write a program to compute the factorial of a given number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int fact=1;
    int i=1;
    while(i<=number){
        fact=fact*i;
        i++;
    }
    cout<<"factorial of number is "<<fact<<endl;
    return 0;
}