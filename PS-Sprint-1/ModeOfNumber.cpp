// Write a program to find the mode (most frequent number) in an array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<" Element : ";
        cin>>arr[i];
    }
    int element=0;
    int maxcount=0;
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            element=arr[i];
        }
    }
    cout<<"The most frequent number in the array is  "<<element<<endl;
    return 0;
}