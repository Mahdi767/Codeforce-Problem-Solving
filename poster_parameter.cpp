/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-18,23:04:10
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
    int n;
    cin>>n;
    int a[n];
    f(i,n){
cin>>a[i];
    }
    ss(a);
     f(i,n){
cout<<a[i]<<" ";
    }
 
    return 0;
}