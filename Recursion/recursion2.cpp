#include <iostream>

using namespace std;

bool checksorted(int arr[], int n){
    if(n==1){
        return true;
    }
    return (arr[0]<arr[1] && checksorted(arr+1, n-1));
}

void fromn(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    fromn(n-1);
    cout<<n<<" ";

}

void tilln(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    tilln(n-1);

}

int firstocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArr = lastocc(arr, n, i+1, key);
    if(restArr != -1){
        return restArr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int n;
    int arr[] = {1,2,1,5,7,2,3,4,6,9,5,1,3,3,4,5};
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<checksorted(arr, n)<<endl;
    tilln(10);
    cout<<endl;
    fromn(10);
    cout<<endl;
    cout<<firstocc(arr, n, 0, 3)<<endl;
    
    cout<<lastocc(arr, n, 0, 3)<<endl;

    return 0;
}