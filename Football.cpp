#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int long_count = 0,temp_count = 1;
   char prev = s[0];
   for(int i=1;i<s.length();i++){
       if(prev == s[i]){
           temp_count++;
       }else{
           if(temp_count > long_count)long_count = temp_count;
           temp_count = 0;
       }
       prev = s[i];
   }
  if(temp_count > long_count)long_count = temp_count;
  if(long_count + 1 >= 7)cout<<"YES";
  else cout<<"NO";
}
