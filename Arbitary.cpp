/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-14,09:38:44
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
  int n;
  cin>>n;
  int a[n];
  f(i,n){
    cin>>a[i];
  }
  int cnt= 0;
  int cnt1=0;
  int mn = a[0];
  int mx = a[0];
  for(int i = 1;i<n;i++){
    if(a[i]<mn){
        mn =a[i];
        cnt++;
    }
    
  }

  for(int i =0;i<n-1;i++){
     if(a[i]>mx){
        mx =a[i];
        cnt1++;
    }
  }
  cout<<cnt+cnt1;
    return 0;
}