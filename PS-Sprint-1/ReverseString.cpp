// Write a program to reverse a given string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin,str);
    int i=0;
    int j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<"reversed string is :"<<str<<endl;
    return 0;
}