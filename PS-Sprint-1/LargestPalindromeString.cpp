// Write a program to find the largest palindrome in a given string.

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
    string name;
    cout<<"Enter the string:";
    getline(cin,name);
    string ans;
    int maxlength=0;
    for(int i=0;i<name.length();i++){
        string str="";
        for(int j=i;j<name.length();j++){
            str+=name[j];
            if(check(str)){
                int length=str.length();
                if(maxlength<length){
                    maxlength=length;
                    ans=str;
                }
            }
        }
    }
    cout<<"Longest Palindrome is : "<<ans<<endl;
    return 0;
}