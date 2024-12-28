/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-16,09:18:10
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
//     cin >> tc;
//     while (tc--) {
// int m,c;
// cin>>m>>c;

//     }
int n;
cin>>n;
int sum1=0,sum2=0;
for(int i = 1;i<=n;i++){
    int m,c;
cin>>m>>c;
if(m>c){
        sum1++;
    }else if(c>m){
        sum2++;
    }
}

// for(int i = 0;i<n;i++){
    
// // sum1+=m[i];
// // sum2+=c[i];
// }

if(sum1>sum2){
    cout<<"Mishka";
}else if(sum1<sum2){
    cout<<"Chris";
}else if (sum1==sum2){
    cout<<"Friendship is magic!^^";
}
// cout<<sum1<<" "<<sum2;

    return 0;
}