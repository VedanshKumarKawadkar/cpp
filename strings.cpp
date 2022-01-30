#include<iostream>
#include<string>

using namespace std;
int main(){
    string s1 = "famcmpoop";
    string s2 = "ily";
    
    s1.erase(2, 4);
    cout<<s1;
    return 0;
}