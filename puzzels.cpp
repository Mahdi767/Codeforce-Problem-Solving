/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-24,16:45:30
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
    int n1,n;
    cin>>n1>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int mx = a[0];
    int mn  = a[0];
    for(int i =0;i<n1;i++){
if(a[i]> mx){
    mx = a[i];
}}
    for(int i =0;i<n1;i++){
if(a[i]< mn){
    mn = a[i];
}
    }
    int result =  mx - mn;
    cout<<result;

}
int main() {
   mhm();
    return 0;
}