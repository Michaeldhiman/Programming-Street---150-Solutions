// Write a program to extract and sum all numbers present in a given string.

#include<bits/stdc++.h>
using namespace std;
int mystoi(string str){
    int ans=0;
    for(int i=0;i<str.length();i++){
        int val=str[i]-'0';
        ans=ans*10+val;
    }
    return ans;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    string ans="";
    int sum=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0'&& str[i]<='9'){
            ans.push_back(str[i]);
        }else{
            if(ans.length()){
                sum=sum+mystoi(ans);
                ans="";
            }
        }
    }
    if(ans.length()){
        sum=sum+mystoi(ans);
        ans="";
    }
    cout<<sum<<endl;
    return 0;
}