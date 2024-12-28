/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-15,22:36:03
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back
void mhm(){
    int n;
    cin>>n;
      char s[n];
     
    for(int i =0;i<n;i++){
   
        cin>>s[i];
    }
     int cnt =0;
    for(int i =0;i<n;i++){
   
       if(s[i] != 'a' &&s[i] != 'e' && s[i] != 'i' &&s[i] !='o' && s[i] != 'u'){
        cnt=0;
        continue;
       }else{
        cnt++;
        if(cnt==4) break;
       }
    }
    if(cnt<4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
mhm();
    }
    return 0;
}