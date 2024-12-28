/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-21,07:41:27
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
int k = n*2;
int a[k];
for(int i =0;i<k;i++){
    cin>>a[i];
}
int cnt =0;
for(int i =0;i<k;i++){
    if( a[i] % 2 != 0){
cnt++;
    }
}
if(cnt == n){
    cout<<"Yes"<<"\n";
}else{
    cout<<"No"<<"\n";
}
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
mhm();
    }
    return 0;
}