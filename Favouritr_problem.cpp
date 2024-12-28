/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-09,15:28:00
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
int n=3;
int arr[n];
arr[0]=a;
arr[1]= b;
 arr[2]=c;
 ss((arr));
 f(i,n){
    cout<<arr[1]<<endl;
    break;
 }
    }
    return 0;
}