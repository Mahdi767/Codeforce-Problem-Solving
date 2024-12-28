/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-23,12:35:30
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
int x,y,z;
cin>>x>>y>>z;
if(x==y){
    cout<<z<<endl;
}else if( x==z){
    cout<<y<<endl;
}else if(y==z){
    cout<<x<<endl;
    }
   }
}