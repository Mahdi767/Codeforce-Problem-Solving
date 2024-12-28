/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-23,10:20:28
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
    int tc;
    cin >> tc;
    while (tc--) {
int x;
cin>>x;
int cnt= 0;
for(int i =1 ; i*i<=x;i++){
    if(x%i == 0){
    cnt++;
    }
    if (cnt == 4) break;
}
if(cnt==3){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
    }
    return 0;
}