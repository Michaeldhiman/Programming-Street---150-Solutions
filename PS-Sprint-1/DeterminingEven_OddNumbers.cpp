#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number:";
    cin>>number;
    if(number%2==0){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }
    // another way
    
    // if(number&1){
    //     cout<<"Number is Odd";
    // }else{
    //     cout<<"Number is Even";
    // }
    return 0;
}