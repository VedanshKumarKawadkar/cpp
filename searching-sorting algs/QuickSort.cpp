#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){
    int pvt = arr[r];
    int i = l-1;

    for(int j=l; j<r; j++){
        if(arr[j]<pvt){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return pvt;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pvt = partition(arr, l, r);
        quickSort(arr, l, pvt-1);
        quickSort(arr, pvt+1, r);
    }
}

int main(){
    int arr[] = {2,4,7,3,1,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int r = n-1;
    quickSort(arr, l, r);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}