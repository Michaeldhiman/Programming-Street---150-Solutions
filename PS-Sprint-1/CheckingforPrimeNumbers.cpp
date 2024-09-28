// Write a program to determine if a number is prime.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number:";
    cin>>number;
    if(number<2){
        cout<<"Number is Not Prime"<<endl;
    }else{
        bool flag=false;
        for(int i=2;i<number;i++){
            if(number%i==0){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<"Number is Prime"<<endl;
        }else{
            cout<<"Number is Not Prime"<<endl;
        }
    }
    return 0;
}