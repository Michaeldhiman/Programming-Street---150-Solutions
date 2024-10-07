// Write a program to find all pairs of elements in an array whose sum equals a specified target.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )"<<endl;
            }
        }
    }
    return 0;
}