// Write a program to count vowels and consonants in a given string.


#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:"<<endl;
    getline(cin,str);
    int vowels=0;
    int consonants=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            vowels++;
        }else{
            consonants++;
        }
    }
    cout<<"Vowels are "<<vowels<<" and Consonants are "<<consonants<<endl;
    return 0;
}