#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0] >= 'a' && s[0] <= 'z'){
        int fNum = (s[0]-'a') + 65;
        s[0] = char(fNum);
    }
    cout<<s;
}
