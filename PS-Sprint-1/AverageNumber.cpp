//  Write a program to calculate the average of numbers in an array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<endl<<"Enter the "<<i<<"Element : ";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    double avg=sum/(double)size;
    cout<<"Average of numbers: "<<avg<<endl;
    return 0;
}