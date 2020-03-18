#include<bits/stdc++.h>
using namespace std;
string stringFormer(char num, int n){
    string temp = "";
    for(int i = 0;i < n;i++){
        temp += num;
        if(i != (n-1))temp += '+';
    };
    return temp;
}
int main(){
    string s,res_str = "",oneStr,twoStr,threeStr;
    cin>>s;
    int oneS = 0,twoS = 0,threeS = 0;
    for(int i=0;i<s.length();i++){
        switch(s[i]){
            case '1':
                oneS++;
                break;
            case '2':
                twoS++;
                break;
            case '3':
                threeS++;
                break;
            default:
                break;
        }
    }
    oneStr = stringFormer('1',oneS);
    twoStr = stringFormer('2',twoS);
    threeStr = stringFormer('3',threeS);
    res_str += oneStr;
    if(twoStr.length() > 0){
        if(oneStr.length() > 0)res_str += '+';
        res_str += twoStr;
    }
    if(threeStr.length() > 0){
        if(oneStr.length() > 0 || twoStr.length() > 0)res_str += '+';
        res_str += threeStr;
    }
    cout<<res_str;
}
