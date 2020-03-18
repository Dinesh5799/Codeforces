#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int lex = 0;
    for(int i=0;i<s1.length();i++){
        char a1 = tolower(s1[i]);
        char a2 = tolower(s2[i]);
        if(a1 < a2){
            lex = -1;
            break;
        }else if(a1 > a2){
            lex = 1;
            break;
        }
    }
    cout<<lex;
}
