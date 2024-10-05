// Write a recursive program to generate the Fibonacci sequence up to a given number.

#include<bits/stdc++.h>
using namespace std;
int fib(int number){
    if(number==0 || number==1) return number;
    int ans=fib(number-1)+fib(number-2);
    return ans;
}
int main(){
    int number;
    cout<<"Enter the number :";
    cin>>number;
    int i=0;
    while(true){
        int fibonacci=fib(i);
        if(fibonacci>=number) break;
        cout<<fibonacci<<" ";
        i++;
    }

    return 0;
}