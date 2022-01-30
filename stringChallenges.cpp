#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int lowerToUpper(string str){
    //cout<<'a'-'A'<<endl;
    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    return 0;
}

int upperToLower(string str){
    for(int i=0; i<=str.length(); i++){
        if (str[i]>='A' && str[i]<='Z')
        {
            /* code */
            str[i] += 32;
        }
    }    
    cout<<str<<endl;
    return 0;
}

int greatestIntfromStr(string str){
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;
    return 0;
}

int func(int arr[]){
    string temp="";
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        string tstr = to_string(arr[i]);
        temp += tstr;
    }
    cout<<temp<<endl;
    sort(temp.begin(), temp.end(), greater<int>());
    cout<<temp<<endl;
}


int maxOfChar(string str){
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i] = 0;
    }

    for(int i=0; i<str.size(); i++){
        freq[str[i] - 'a']++;
    }

    char res = 'a';
    int maxf = 0;
    for(int i=0; i<26; i++){
        if(freq[i]>maxf){
            maxf=freq[i];
            res = i + 'a';
        }
    }
    cout<<"Max Char: "<<res<<endl;
    cout<<"Max Char Count: "<<maxf<<endl;
    return 0;
}

int main(){
    string str="wdjdnwiubgdweqweweqdefvdvn,dccccckyugfcqftq";
    lowerToUpper(str);
    //cout<<str<<endl;
    upperToLower(str);
    //cout<<str<<endl;
    greatestIntfromStr("1330");
    
    int arr[6]={1, 30, 3, 4, 56, 0};
    string temp="";
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        string tstr = to_string(arr[i]);
        temp += tstr;
    }
    cout<<temp<<endl;
    sort(temp.begin(), temp.end(), greater<int>());
    cout<<temp<<endl;
    
    maxOfChar(str);
    return 0;
}

