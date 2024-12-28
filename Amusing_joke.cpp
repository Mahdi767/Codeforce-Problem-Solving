/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-24,17:04:19
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
string s1,s2,s3;
cin>>s1>>s2>>s3;
sort(s3.begin(),s3.end());
string test =s1+s2;
sort(test.begin(),test.end());
if(test == s3){
    yes;
}else{
    no;
}
// for(int i = 0;i<s3.size();i++){
//     if(test[i] == s3[i]){
// yes;
//     }else{
//         no;
//     }
// }

  
    return 0;
}