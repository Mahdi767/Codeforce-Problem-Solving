/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-10,07:27:19
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
int n;
cin>>n;
vector<int>a(n);
f(i,n)
{
    cin>>a[i];
}   
int f=1;int l=n;
while (f<l&&a[f+1]) f++;
while (l>f&&a[l-1]) l--;
cout<<l-f<<endl;
 }
    return 0;
}