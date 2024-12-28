/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-13,23:17:00
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
int a,b,c;
cin>>a>>b>>c;
if(a+b==c|| b+c==a|| a+c ==b){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
    }
    return 0;
}