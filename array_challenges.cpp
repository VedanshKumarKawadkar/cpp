//Max till i

#include <iostream>
#include <algorithm>
#include <math.h>
#include <climits>
using namespace  std;

/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int mx=arr[0];
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx;
    }
    return 0;
}
*/

/*
int longestArithmeticSubarray(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int j=2, len=2;
        int diff=arr[1]-arr[0];
        int ans=2;
        while(j<n){
            if(arr[j]-arr[j-1] == diff){
                len++;
            }
            else{
                diff = arr[j] - arr[j-1];
            }
            ans = max(ans, diff);
            j++;
        }

    }
    
    return 0;
}
*/

/*
int recordBreaker(int n, int arr[]){
    int y=0;
    for(int i=0; i<n; i++){
        if(i==0){
            if (arr[0]>arr[1]){
                y++;
            }
        }

        if(i==n-1){
            if(arr[n-2]<arr[n-1]){
                y++;
            }
        }

        else if(i>0 && i<n-1){
            int maxn = arr[0];
            if((arr[i]==max(arr[i], maxn)) && (arr[i]>arr[i+1])){
                y++;
            }
        }
    }
    cout<<y;
}
*/

/*
//First Repeating Element
int firstRepeatingElement(int arr[], int n){
    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }

    if(minidx == INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int firstRepeatingElement(arr[], n);
    return 0;
}
*/
/*
//Subarray with Given Sum
int main(){
    int n, s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0, j=0, st=-1, en=-1, sum=0;
    while(j<n && sum+arr[j]<=s){
        sum += arr[j];
        j++;
    }

    if(sum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while (j<n)
    {
        sum += arr[j];
        while(sum > s){
            sum -= arr[i];
            i++;
        }
        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;   
    }

    cout<<st<<" "<<en<<endl;
    return 0;
}
*/


/*
//Smallest Positive Missing Number

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int matchingArr[n];
    for(int i=0; i<n; i++){
        matchingArr[i] = 0;
    }

    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            matchingArr[arr[i]] = 1;
        }
    }

    for(int i=0; i<n; i++){
        if (matchingArr[i]==0){
            cout<<"Answer: "<<i<<endl;
            break;
        }
    }
    return 0;
}
*/

/*
//Print all subarrays

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

//maximum sum subarray
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int currSum[n+1];
    currSum[0] = 0;
    for(int i=0; i<n; i++){
        currSum[i] = currSum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout<<maxSum;

    return 0;
}

//Maximum sum subarray with Kadanes Algorithm
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max_ending = 0;
    int maxSum = INT_MIN;

    for(int i=0;i<n; i++){
        max_ending += arr[i];
        if (max_ending>maxSum){
            maxSum = max_ending;
        }
        if(max_ending<0){
            max_ending = 0;
        }
    }

    cout<<maxSum;
}

//minimum sum subarray
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min_ending = 0;
    int min_so_far = INT_MAX;

    for(int i=0; i<n; i++){
        if(min_ending>0){
            min_ending = 0;
        }
        else{
            min_ending += arr[i];
        }
        min_so_far = min(min_ending, min_so_far);
    }

    cout<<min_so_far
}*/

/*
//maximum sum circular subarray

int kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum<0){
            currSum=0;
        }
        if(currSum>maxSum){
            maxSum = currSum;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int wrapSum;
    int nonWrapSum = kadane(arr, n);
    int newArr[n];
    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum += arr[i];
        newArr[i] = -arr[i];
    }
    wrapSum = totalSum + kadane(newArr, n);
    int ans = max(wrapSum, nonWrapSum);
    cout<<ans<<endl;
    return 0;
}*/

//Pair Sum Array: 

bool pairSum(int arr[], int n, int k){
    int low=0, high=n-1;
    while (low<high)
    {
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }

    return false;
}