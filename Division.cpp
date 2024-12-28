/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-14,09:52:18
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
if(n>=1900){
cout<<"Division 1"<<endl;
}else if(n>=1600 && n<= 1899){
cout<<"Division 2"<<endl;
}else if(n>=1400 && n<=1599){
cout<<"Division 3"<<endl;
}else{
    cout<<"Division 4"<<endl;
}
    }
    return 0;
}