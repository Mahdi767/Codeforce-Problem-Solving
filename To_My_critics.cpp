/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,18:38:56
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
if((a+b)>=10|| (b+c)>=10 || (c+a)>=10){
cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
    }
    return 0;
}