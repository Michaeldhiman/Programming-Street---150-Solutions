// Write a program to generate a square matrix of a given size and fill it with sequential numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[3][3];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    } 
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}