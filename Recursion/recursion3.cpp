#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
#include<string>

using namespace std;

int sumTillN(int n){
    if(n==0){
        return 0;
    }
    return n+sumTillN(n-1);
}

int power(int n, int p){
    if(p==0){
        return 1;
    }
    return n*power(n, p-1);
}

int factorial(int n){
    if(n<0){
        string str="Invalid Input";
        cout<<str<<endl;
        return 0;

    }
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}


int fibonacci(int n){
    //Give nth fibonacci number
    if(n<=1){
        return n;
    }
    return fibonacci(n-2)+fibonacci(n-1); 
}


bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    return (arr[0]<=arr[1] && sorted(arr+1, n-1));
}



void n_to_zero(int n){
    if(n==0){
        cout<<0;
        return;
    }
    cout<<n<<"->";
    n_to_zero(n-1);
}

void zero_to_n(int n){
    if(n==0){
        cout<<0<<"->";
        return;
    }
    zero_to_n(n-1);
    cout<<n<<"->";
}


int firstOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr, n, i+1, key);
}


int lastOcc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArr = lastOcc(arr, n, i+1, key);
    if(restArr!=-1){
        return restArr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

void revStr(string s){
    if(s.length()==0){
        return ;
    }

    string res= s.substr(1);
    revStr(res);
    cout<<s[0];

}


void replacePi(string s){
    if(s.length()==0){
        return;
    }

    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }

    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

void TowerOfHanoi(char start, char end, char mid, int n){
    if(n==0){
        return;
    }
    TowerOfHanoi(start, mid, end, n-1);
    cout<<"Move from: "<<start<<" to: "<<mid<<endl;
    TowerOfHanoi(mid, end, start, n-1);
}


string removeDuplicates(string s){
    if(s.length()==0){
        return "";
    }
    string res=s.substr(1);
    char ch = s[0];
    string ans=removeDuplicates(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}


string moveXtoEnd(string s){
    int pos=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]!='x'){
            char temp=s[i];
            s[i] = s[pos];
            s[pos] = temp;
            pos++;
        }
    }

    return s;
}

int main(){
    string s = "ipipipipxxxip";
    revStr(s);
    cout<<endl;
    replacePi(s);
    cout<<endl;
    cout<<moveXtoEnd(s)<<endl;
    return 0;
}