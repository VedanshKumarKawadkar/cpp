//Recursion

#include<iostream>
#include<string>

using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum = Sum(n-1);
    return n+prevsum;
}

int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevPow =  power(n, p-1);
    return n*prevPow;
}

int factorial(int n){
    if(n<0){
        string str="Invalid input.";
        cout<<(str)<<endl;
        return 0;
    }
    if(n==0){
        return 1;
    }
    int prevfct = factorial(n-1);
    return n*prevfct;
}

int fibonacci(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int prev = fibonacci(n-1)+fibonacci(n-2);
    return prev;
}

int main(){
    int n=10;
    int p=5;
    cout<<Sum(10)<<endl;
    cout<<power(p, p)<<endl;
    cout<<factorial(-n)<<endl;
    return 0;
}