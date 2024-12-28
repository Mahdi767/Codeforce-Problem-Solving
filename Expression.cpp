/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-21,08:22:53
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
string s;
cin>>s;
int a =  s[0] - '0';
int b = s[2] - '0';
if(a>b){
    cout<<a<<">"<<b<<endl;
}else if(a<b){
    cout<<a<<"<"<<b<<endl;
}else{
    cout<<a<<"="<<b<<endl;
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