//  Write a program to check if two strings are anagrams.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    cout<<"Enter the  first string:";
    getline(cin,str1);
    string str2;
    cout<<"Enter the second string:";
    getline(cin,str2);
    int arr[256]={0};
    for(int i=0;str1[i]!='\0';i++){
        char val=tolower(str1[i]);
        arr[val]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        char val=tolower(str2[i]);
        arr[val]--;
    }
    bool flag=false;
    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            flag=true;
        }
    }
    if(flag){
        cout<<"Strings are not anagram";
    }else{
        cout<<"Strings are  anagram";

    }
    return 0;
}