/*
#include<iostream>
using namespace std;

int bubblesort(int arr[], int n){
    int cnt = 1;
    while(cnt<n){
        for(int i=0; i<n-cnt; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        cnt++;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}*/

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n=5;
    int arr[5] = {5, 3, 7, 1, 3};
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"->";
    }
    return 0;
    
}