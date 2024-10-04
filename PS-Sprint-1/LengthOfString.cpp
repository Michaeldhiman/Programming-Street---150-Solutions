//  Write a program to determine the length of a string without using built-in functions.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter the string :";
    getline(cin,sentence);
    int count=0;
    for(int i=0;sentence[i]!='\0';i++){
        count++;
    }
    cout<<"The length of string is "<<count<<endl;
    return 0;
}