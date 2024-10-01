//  Write a program to find missing numbers in a sequence from 1 to n.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size:";
    cin>>size;
    int arr[100];
    for(int i=0;i<size-1;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=size;i++){
        bool flag=false;
        for(int j=0;j<size-1;j++){
            if(i==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==false){
            cout<<i<<" ";
            break;
        }
    }
    return 0;
}