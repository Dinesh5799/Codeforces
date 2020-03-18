#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string decide_partition(ll n){
    if(n <= 2)return "NO";
    if((n & 1) ==  0)return "YES";
    return "NO";
}
int main(){
    ll n;
    cin>>n;
    cout<<decide_partition(n);
}
