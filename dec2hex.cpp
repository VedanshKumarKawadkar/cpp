#include<iostream>
using namespace std;

void dec2hex(int n){
    char hexnum[100];
    
    int i =0;
    while(n != 0){
        int temp = 0;
        temp = n%16;
        if (temp<10){
            hexnum[i] = temp + 48;
            i++;
        }
        else{
            hexnum[i] = temp + 55;
            i++;
        }
        n = n/16;
    }
    for(int j=i-1; j>=0; j--)
        cout << hexnum[j];
    
    
}

int main(){
    int n = 25;
    dec2hex(n);
    return 0;
}