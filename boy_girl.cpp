/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-06 18:07:14
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  int cnt =0;
  istringstream iss(s);
string word; 
 set<char> see;    
 while(iss>>word)
for(char c : word){
if(see.find(c)==see.end()){
    cnt++;
    see.insert(c);
}
}
if(cnt%2==0){
    cout<<"CHAT WITH HER!"<<endl;
    
}else{
    cout<<"IGNORE HIM!"<<endl;
}

  
    return 0;
}