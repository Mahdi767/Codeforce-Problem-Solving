/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-24,16:34:41
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back
#define vc vector<int>
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
int n;
cin>>n;
int a[n];
f(i,n){
    cin>>a[i];
}
int cnt  =0;
int cnt2=0;
for(int i =0 ;i<n;i++){
  if(a[i]%2==0){
  cnt++;
  }
  if(a[i]%2 != 0){
    cnt2++;
  }
}
if(cnt == n/2 || cnt==n || cnt2 == n/2 || cnt2==n){
    yes;
}else{
    no;
}
    }
    return 0;
}