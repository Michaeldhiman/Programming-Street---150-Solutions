// Write a program to check if a string or number is a palindrome.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter The string:";
    cin>>sentence;
    int i=0;
    int j=sentence.length()-1;
    bool flag=true;
    while(i<j){
        if(sentence[i]!=sentence[j]){
            flag=false;
        }
        i++;
        j--;
    }
    if(flag) cout<<"String is Palindrome";
    else cout<<"String is not Palindrome";
    return 0;

}