/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-11,20:59:38
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
   string s,s1;
   cin>>s>>s1;
int k1=0,k2=0;
for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);

//     char ch;
//     ch=tolower(s[i]); 
//   k1+=int(ch);

}
for(int i=0;i<s1.size();i++){

    // char ch2;
s1[i]=tolower(s1[i]);
    // ch2= tolower(s1[i]);
    // k2+=int(ch2);

}
 if(s==s1){
        cout<<"0";
    }
for(int i =0;i<s.size();i++){
    if(s[i]<s1[i]){
        cout<<"-1";
        break;
    }
      if(s[i]>s1[i]){
        cout<<"1";
        break;
    }
}
// if(k1<k2){
//     cout<<"-1";
// }else if(k2<k1){
//     cout<<"1";
// }else if(k1==k2){
//     cout<<"0";
// }
    return 0;
}