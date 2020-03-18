#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,res_str="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        char temp = tolower(s[i]);
        switch(temp){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': 
            case 'y':
                break;
            default:
                res_str += '.';
                res_str += temp;        
                break;
        }
    }
    cout<<res_str;
}
