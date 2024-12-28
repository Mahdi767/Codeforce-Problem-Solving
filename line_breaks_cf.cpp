/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-05 20:49:35
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n,m;
        cin>>n>>m;
        int cnt=0;
        vector<string>a(n);
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
    if(m>= a[i].size()){
        cnt++;
        m-=a[i].size();
    }else{
        m=0;
    }
// cout<<a[i].length()<<" ";
}
cout<<cnt<<endl;
}


    }
 