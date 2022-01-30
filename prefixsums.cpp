#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int res;
        if(a==b){
            if(a%3==0){
                res = 1;
            }
            else{
                res=0;
            }
        }

        else{
            if((a%3==0 && b%3!=0) || (a%3!=0 && b%3==0)){
                res= 1 + (b-a-1)/3;
            }
            else if(a%3==0 && b%3==0){
                res=2+(b-a-1)/3;
            }
            else if((a%3!=0) && (b%3!=0)){
                res = (b-a+1)/3;
            }
        }

        cout<<res<<endl;

    }
    return 0;
}