//  Write a program to check if a given string with brackets is balanced.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    string ans="";
    for(int i=0;i<str.length();i++){
        if(ans.empty()) ans.push_back(str[i]);
        else if(ans.back()=='('  && str[i]==')'){
            ans.pop_back();
        }else if(str[i]==']' && ans.back()=='['){
            ans.pop_back();

        }else if(str[i]=='}' && ans.back()=='{'){
            ans.pop_back();

        }else{
            ans.push_back(str[i]);
        }
    }
    if(ans.empty()){
        cout<<"String is balanced"<<endl;
    }else{
        cout<<"String is Not balanced"<<endl;

    }
    return 0;
}