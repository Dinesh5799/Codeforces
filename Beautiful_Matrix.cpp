#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,inp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>inp;
            if(inp == 1){
                r = i+1;
                c = j+1;
            }
        }
    }
    cout<<abs(r-3)+abs(c-3);
}
