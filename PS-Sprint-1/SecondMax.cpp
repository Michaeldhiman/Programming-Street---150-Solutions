// Write a program to find the second largest number in an array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<"Element : ";
        cin>>arr[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }else if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
   cout<<"The second largest number in the array is  "<<smax<<endl;
    return 0;
}