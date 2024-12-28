/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-23,12:43:21
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
int n,n1;
cin>>n>>n1;
int a[n];
f(i,n){
cin>>a[i];
}
ss(a);
int result = 0;
for(int i  =0;i<n1;i++){
    if(a[i]<=0){
       result+=a[i];
    }
}
cout<<abs(result)<<endl;
    return 0;
}