//Unique Number:
#include <iostream>
#include<algorithm>

using namespace std;

int UniqueNo(int arr[], int n){
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum = xorSum^arr[i];
    }

    return xorSum;
}



int main(){
    int n=5;
    int arr[] = {1, 2, 3, 4, 1};
    cout<<UniqueNo(arr, n)<<endl;
    return 0;
}