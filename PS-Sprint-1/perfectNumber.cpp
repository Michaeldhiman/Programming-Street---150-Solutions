// Write a program to determine if a number is a perfect number.


#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0) sum+=i;
    }
    if(sum==number){
        cout<<"Number is Perfect Number";
    }else{
        cout<<"Number is Not Perfect Number";

    }
    return 0;
}
