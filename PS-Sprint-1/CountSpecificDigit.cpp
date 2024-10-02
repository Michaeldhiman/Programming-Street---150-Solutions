// Write a program to count the occurrences of a specific digit in a number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    char digit;
    cout<<"Enter the digit: ";
    cin>>digit;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==digit) count++;
    }
    cout<<"The digit is repeated "<<count<<" Times";
    return 0;
}