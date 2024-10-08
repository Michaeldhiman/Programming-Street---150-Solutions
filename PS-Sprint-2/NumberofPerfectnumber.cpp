// Write a program to find how many perfect numbers exist up to a given

#include<bits/stdc++.h>
using namespace  std;
bool check(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        if(num%i==0) sum+=i;
    }
    if(sum==num) return true;
    else return false;
}
int main(){
    int limit ;
    cout<<"Enter the limit :";
    cin>>limit;
    int count=0;
    for(int i=1;i<=limit;i++){
        if(check(i)) count++;
    }
    cout<<"The no of perfect numbers : "<<count<<endl;
    return 0;
}