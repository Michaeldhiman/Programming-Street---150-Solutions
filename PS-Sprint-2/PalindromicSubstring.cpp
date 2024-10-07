// Write a program to count how many palindromic substrings exist in a given string.

#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        string ans="";
        for(int j=i;j<str.length();j++){
            ans.push_back(str[j]);
            if(check(ans)) count++;
        }
    }
    cout<<"No of Palindromic substring : "<<count<<endl;
    return 0;
}