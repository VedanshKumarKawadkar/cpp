#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minx]){
                minx = j;
            }
        }
        swap(&arr[i], &arr[minx]);
    }
}


void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}



int main(){
    int n=10;
    int arr[10] = {2,4,1,3,5,7,2,7,1,6};
    bubbleSort(arr, n);
    for(int i=0; i<n; i+=1){
        cout<<arr[i]<<" ";
    }
    return 0;
}
