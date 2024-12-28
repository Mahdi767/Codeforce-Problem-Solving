/**
 *    author:  Mahdi Hasan
 *    created: 2024-12-06 21:24:05
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
      int n;
        cin>>n;
       int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }  
       sort(a,a+n);
           for(int i =0;i<n-1;i++){
          cout<<a[i]-a[n]<<" ";
        }  
            for(int i =0;i<n;i++){
            cout<<a[n]-a[n-1];
        }  
        }
    }
   
