/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-07 07:27:42
**/

#include <bits/stdc++.h>
using namespace std;
void solve(string A){
    int cnt1=0;
    int cnt2 =0;
    for(char a :A){
    if(a=='A'){
        cnt1++;
    }
    if(a=='B'){
        cnt2++;
    }}
if(cnt1>cnt2){
    cout<<"A"<<endl;
}else{
    cout<<"B"<<endl;
}
    }
int main() {
    int T;
    cin >> T;
    while (T--) {
      string A;
      cin>>A;
solve(A);
    }
    return 0;
}