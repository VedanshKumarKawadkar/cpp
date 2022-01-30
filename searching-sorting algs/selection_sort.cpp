/*
#include<iostream>
using namespace std;

int selecttionsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selecttionsort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}*/

#include<iostream>

using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }   
}

int main(){
    int n=5;
    int arr[5] = {3, 6, 1, 0, 4};
    SelectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}