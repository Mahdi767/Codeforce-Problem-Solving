/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,22:24:04
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
string s1;
 cin>>s1;
 int cnt=0;
 int cnt1=0;
 for(char s : s1){
if(int(s)>= 65 && int(s)<=90){// upper
    cnt++;
}else if (int(s) >= 97 && int(s) <= 122) { //lower
    cnt1++;
}}
// cout<<cnt<<" "<<cnt1;
if(cnt>cnt1){
    //    s[i]=tolower(s[i]);
    for(int i=0;i<s1.size();i++){
    char ch;
    ch=toupper(s1[i]); 
    cout<<ch;
 }

}
else if(cnt1>=cnt){
     for(int i=0;i<s1.size();i++){
    char ch;
    ch=towlower(s1[i]); 
    cout<<ch;
 } 
}



    return 0;
}