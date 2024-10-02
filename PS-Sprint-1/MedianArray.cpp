// Write a program to find the median of an array of numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<" Element: ";
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        int index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
    int ans=0;
    if(size&1){
        ans=size/2;
    }else{
        ans=(size/2)-1;
    }
    cout<<"Median of Array is : "<<arr[ans]<<endl;
    return 0;
}