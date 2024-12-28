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
        cin >> n;
        vector<int> a(n);
        f(i, n) {
            cin >> a[i];
        }
        int ev1 = 0,od1 = 0;
 f(i, n) {
        if(a[i]%2 ==0){
ev1++;
        }else{
            od1++;
        }
        }
        cout<<ev1<<" "<<od1;
        int ev2 = 0, od2 = 0;

   
        for (int i = 0; i < n; i += 2) {
            if ((a[i] + 1) % 2 == 0) ev2++;
        }
        
      
        for (int i = 1; i < n; i += 2) {
            if ((a[i] + 1) % 2 != 0) od2++;
        }

        
        if (ev1 ==od2 ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
