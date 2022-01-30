#include<iostream>

using namespace std;

void sort012(int arr[], int n){
    int x=0, y=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=1){
            int temp = arr[i];
            arr[i] = arr[x];
            arr[x] = temp;
            x++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]!=2){
            int temp = arr[i];
            arr[i] = arr[y];
            arr[y] = temp;
            y++;
        }
    }

}

int main(){
    int arr[] = {1,0,2,1,2,0};
    int n = 6;
    sort012(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}