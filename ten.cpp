/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-14,19:07:06
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
}
if(s=="yes"){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
// for(int i=0;i<s.size();i++){
//     cout<<s;
// // if(s=="yes"){
// // cout<<"YES"<<endl;
// // }else{
// //     cout<<"NO"<<endl;
// // }
// }
}
}