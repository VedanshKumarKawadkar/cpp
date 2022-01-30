#include<iostream>
#include<string>
using namespace std;

void revStr(string str){
    if(str.length()==0){
        return;
    }

    string res = str.substr(1);
    //cout<<res<<" ";
    revStr(res);
    cout<<str[0];
}

void replacePi(string str){
    if(str.length()==0){
        return;
    }

    if(str[0]=='p' && str[1]=='i'){
        cout<<"3.14";
        replacePi(str.substr(2));
    }

    else{
        cout<<str[0];
        replacePi(str.substr(1));
    }
}

void TowerOfHanoi(int n,  char src, char dest, char helper){
    if(n==0){
        return;
    }
    TowerOfHanoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    TowerOfHanoi(n-1, helper, dest, src);
}

void func(int nums[], int target, int n){
        //int n=sizeof(nums)/sizeof(nums[0]);
        int start=0;
        int end=n-1;
        while(start<end){
            int res[] = {start, end};
            if((nums[start]+nums[end])==target){
                cout<<"starting index:"<<start<<","<<"ending index:"<<end<<endl;
                return;
            }
            else if((nums[start]+nums[end])>target){
                end--;
            }
            else{
                start++;
            }
        }
    }

string removeDuplicates(string str){
    if(str.length()<2){
        return str;
    }

    char ch=str[0];
    string ans = removeDuplicates(str.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);

}

void towerOH(int n, char start, char end, char mid){
    if(n==0){
        return;
    }
    towerOH(n-1, start, mid, end);
    cout<<"Move from: "<<start<<" to "<<end<<endl;
    towerOH(n-1, mid, end, start);
}

string moveXtoend(string str){
    int pos=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]!='x'){
            char temp = str[i];
            str[i] = str[pos];
            str[pos] = temp;
            pos++;
        }
    }
    return str;
}

string moveXtoendRecur(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = moveXtoendRecur(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

void allSubStrings(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string rest = s.substr(1);
    allSubStrings(rest, ans);
    allSubStrings(rest, ans+ch);
}

void allsubstringASCII(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string ros = s.substr(1);

    allsubstringASCII(ros, ans);
    allsubstringASCII(ros, ans+ch);
    allsubstringASCII(ros, ans+ to_string(code));

}

void keypad(string s, string ans){
    string keypadArr[] = {"_", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string code = keypadArr[ch-'0'];
    string ros=s.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad(ros, ans+code[i]);
    }
}

void allpermutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        string ros=s.substr(0, i)+s.substr(i+1);
        allpermutation(ros, ans+ch);
    }
}

int countpaths(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int cnt=0;

    for(int i=0; i<=6; i++){
        cnt+=countpaths(s+i, e);
    }
    return cnt;
}

//Count maze paths from strt to end, can travel only R or D

int countMazePath(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }

    if(i>=n || j>=n){
        return 0;
    }

    return countMazePath(n, i+1, j)+countMazePath(n, i, j+1);
}


int tilingProblem(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingProblem(n-1)+tilingProblem(n-2);
}


void allSubs(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char c = s[0];
    string res = s.substr(1);
    allSubs(res, ans);
    allSubs(res, ans+c);


}





int main(){
    string s;
    cin>>s;
    return 0;
}