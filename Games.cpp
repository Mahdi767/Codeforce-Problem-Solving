/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-24,15:06:08
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back
#define vc vector<int>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
   int n;
    cin>>n;
    int h[n];
    int a[n];
    f(i,n){
        cin>>h[i]>>a[i];
    }
    int cnt=0;
    for(int i =0;i<n;++i){
        for(int j=0;j<n;++j){
if(h[i]==a[j]){
    ++cnt;
    }
    
    }}
    cout<<cnt<<endl;
    }   