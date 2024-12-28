/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-06 18:44:52
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
int n,x;
cin>>n>>x;
int cnt= 0;
vector<int>a(n);
for(int i = 0;i<n;i++){
    cin>>a[i];
}
for(int i = 0;i<n;i++){
    // if(a[x-1] == 0){
    //     cout<<"0";
    //        break;
    // }
 
  if(a[i]>0 && a[i]>= a[x-1]){
cnt++;
   }
}
cout<<cnt;
    return 0;
}