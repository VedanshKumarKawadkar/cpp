#include<iostream>

using namespace std;

void printNto1(int n){    
    if(n==0){
        return;
    }
    cout<<(n)<<" ";
    printNto1(n-1);
    //n = n-1;
    return;
}

void print1toN(int n){
    if(n==0){
        return;
    }

    print1toN(n-1);
    cout<<n<<" ";
    return;
}

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int tail_factorial(int n, int k){
    if(n==0 || n==1){
        return k;
    }
    return tail_factorial(n-1, k*n);
}

//writing base casess
int sumTillN(int n){
    if(n==0){
        return 0;
    }
    return n+sumTillN(n-1);
}

bool palindromeCheck(string s, int start, int end){
    if(start>=end){
        return true;
    }
    return (s[start]==s[end])&&(palindromeCheck(s, start+1, end-1));
    
}

bool checkSorted(int arr[], int n){
    if(n==1){
        return true;
    }
    return (arr[0]<=arr[1])&&(arr+1, n-1);
}

int sumOfDigits(int n){
    if(!n){
        return 0;
    }
    return sumOfDigits(n/10)+(n%10);
}

int ropeCutting(int l, int a, int b, int c){
    if(l==0){
        return 0;
    }
    if(l<0){
        return -1;
    }
    int res = max(ropeCutting(l-a, a, b, c), ropeCutting(l-b, a, b, c), ropeCutting(l-c, a, b, c));
    if(res==-1){
        return -1;
    }
    return res+1;
}

int ropeCuttingProb(int l, int a, int b, int c){
    if(l==0){
        return 0;
    }
    if(l<0){
        return -1;
    }
    int res = max(ropeCuttingProb(l-a, a, b, c), ropeCuttingProb(l-b, a, b, c), ropeCuttingProb(l-c, a, b, c));
    if(res == -1){
        return -1;
    }
    return res+1;

}


int main(){
    int n=7;
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[] = {4,2,1,4,6,2,6};
    printNto1(n);
    cout<<endl;
    print1toN(n);
    cout<<endl;
    cout<<factorial(5)<<endl;
    cout<<tail_factorial(5, 1)<<endl;
    cout<<sumTillN(10)<<endl;
    cout<<palindromeCheck("aabbaa", 0, 5)<<endl;
    cout<<palindromeCheck("caabbaa", 0, 6)<<endl;
    cout<<checkSorted(arr1, 7)<<endl;
    cout<<checkSorted(arr2, 7)<<endl;
    cout<<sumOfDigits(12384)<<endl;
    return 0;
} 