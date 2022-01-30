#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int lo=0;
    int high=n;
    while(lo<=high){
        int mid = (lo+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else{
            lo = mid+1;
        }
    }   
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr, n, key)<<endl;
    return 0;
}