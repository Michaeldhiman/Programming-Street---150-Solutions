// Write a program to find the largest and smallest numbers in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"Largest number is : "<<largest<<" and Smallest number is:"<<smallest<<endl;
    return 0;
}