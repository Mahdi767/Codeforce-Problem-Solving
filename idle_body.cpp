/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-17,18:39:42
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
    int s1=0,s2=0,s3=0;
    while (tc--) {
int x,y,z;
cin>>x>>y>>z;
s1+=x;
s2+=y;
s3+=z;
    }
    if(s1 ==0 && s2 ==0 && s3 ==0) yes;
else no;
    return 0;
}


