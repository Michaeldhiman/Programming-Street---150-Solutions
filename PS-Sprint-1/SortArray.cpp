// Write a program to sort an array of numbers in ascending order.



#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size";
    cin>>size;
    int arr[100];
        cout<<"Enter the elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Original Array:"<<endl;
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
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
   cout<<"Updated Array:"<<endl;
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}