/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-24,15:19:54
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

void mhm(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
    cin>>a[i];
    }
    int cnt= 0;
    for(int i =0;i<n;i++){
if(a[i]<a[i+1]){
cnt++;
}
    }
    cout<<cnt;
}
int main() {
  mhm();
    return 0;
}