/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-05 18:46:42
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i =0;i<n;i++){
    cin>>a[i];
  }
   for(int i =0;i<n;i++){
    if(a[i]==0){
        a[i]=0;
    }else
   if(a[i]<0){
    a[i]=2;
   }else{
 a[i]=1;
   }
  }
   for(int i =0;i<n;i++){
    cout<<a[i]<<" ";
  }
    return 0;
}