/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-23,10:52:38
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
     int cnt = 0;
    while (tc--) {
    string s;
    cin>>s;
   
    int a,b,c,d;
if(s=="Tetrahedron") cnt+=4;
if(s=="Cube") cnt+=6;
if(s=="Octahedron") cnt+=8;
if(s=="Dodecahedron") cnt+=12;
if(s=="Icosahedron") cnt+=20;

    }
    cout<<cnt;
    return 0;
}