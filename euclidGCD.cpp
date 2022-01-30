#include<iostream>
#include<algorithm>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    int a=36, b=1869;
    cout<<gcd(a, b)<<endl;
    return 0;
}