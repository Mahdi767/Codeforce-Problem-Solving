/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,18:47:53
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
    ll n;
    cin>>n;
    ll cnt=0;
    ll cnt1 =0;
  while(n>0){
    ll last = n%10;
    n=n/10;
if(last == 4|| last ==7){
    cnt1++;
}
  }
  if(cnt1 == 4|| cnt1==7){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
//   cout<<cnt<< " "<<cnt1;
// if(cnt==1){ cout<<"NO";
// return 0;
// }else
// if(cnt >1 && cnt==cnt1){
//     cout<<"YES";
// }else{
//     cout<<"NO";
// }
    return 0;
}