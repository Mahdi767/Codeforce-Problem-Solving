/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,22:03:29
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
   int cnt = 0;
   int cnt1 =0;
   while(n--){
  char q;
    cin>>q;
  
 if(q=='A'){
    cnt++;
 }else{
    cnt1++;
 }}
    
    if(cnt>cnt1){
        cout<<"Anton";
    }else if( cnt1>cnt){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }}
   
    