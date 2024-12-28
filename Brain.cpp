/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-21,16:32:07
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
int n,m;// n means line & m means char
cin>>n>>m;
 int cnt=0;
    char x[m][n];
    for(int i = 0;i<m;++i){
for(int  j = 0;j<n;j++){
cin>>x[i][j];
if(x[i][j] == 'C' || x[i][j]=='M' || x[i][j] == 'Y'){
    cnt++;
}

}
    }
   

if(cnt>0){
    cout<<"#Color";
}else{
    cout<<"#Black&White";
}

}

int main() {
    mhm();
    return 0;
}