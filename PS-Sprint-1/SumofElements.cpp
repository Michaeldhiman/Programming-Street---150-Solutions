// Write a program to find the sum of elements in an array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the elements:";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
   cout<<"Sum of Elements in an array is "<<sum<<endl;
    return 0;
}