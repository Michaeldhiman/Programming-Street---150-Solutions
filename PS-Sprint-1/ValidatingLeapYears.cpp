// Write a program to check if a given year is a leap year

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"Enter the Year:";
    cin>>year;
    if(year%400==0 ||(year%4==0 && year%100!=0)){
        cout<<"It is Leap Year"<<endl;
    }else{
        cout<<"It is Not Leap Year"<<endl;
    }
    return 0;
}