#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dead_line = a[k-1];
    for(int i=0;i<n;i++){
        if(a[i] >= dead_line && a[i] > 0)count++;
    }
    cout<<count;
}
