/*
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int isLucky = true;
    for(int i=0;i<s.length();i++){
        if(s[i] != '4' && s[i] != '7'){
            isLucky = false;
            break;
        }
    }
    int num = stoi(s);
    if(num%4 == 0 || num%7 == 0 || num%44 == 0 || num%47 == 0 || num%74 == 0 || num%77 == 0 || num%444 == 0 || num%477 == 0 || num%474 == 0 || num%744 == 0 || num%777 == 0 || num%747 == 0){
        isLucky = true;
    }
    isLucky?cout<<"YES":cout<<"NO";
}
