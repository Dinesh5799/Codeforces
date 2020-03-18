#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p1,p2,p3,count = 0;
    while(n--){
        cin>>p1>>p2>>p3;
        if((p1+p2+p3) >= 2)count++;
    }
    cout<<count;
}
