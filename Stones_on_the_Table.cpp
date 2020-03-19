#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0,n;
    cin>>n;
    string s;
    cin>>s;
    char prev_c = s[0];
    for(int i=1;i<s.length();i++){
        if(prev_c == s[i]){
            count++;
        }
        prev_c = s[i];
    }
    cout<<count;
}
