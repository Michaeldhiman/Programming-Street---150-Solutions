//  Write a program to find the longest substring without repeating characters in a given string.


// this solution takes the time complexity of o(n^3);

#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    unordered_map<int,int> hash;
    for(int i=0;i<str.length();i++){
        hash[str[i]]++;
    }
    for(auto it:hash){
        if(it.second>1) return false;
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    int count=0;
    string ans="";
    for(int i=0;i<str.length();i++){
        string str2="";
        for(int j=i;j<str.length();j++){
            str2+=str[j];
            if(check(str2)){
                if(str2.length()>count){
                    count=str2.length();
                    ans=str2;
                }
            }
        }
    }
    cout<<"Longest Substring is :"<<ans<<endl;
    return 0;
}

