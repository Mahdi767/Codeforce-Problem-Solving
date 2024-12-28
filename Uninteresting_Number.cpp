#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t; 
    while (t--) {
        ll n;
        cin >> n;
           if (n % 9 == 0) {
                cout << "YES" << endl;
                break;
            }
        string s = to_string(n);
        
        while (true) {
            s[0] = (s[0] - '0') * 2 + '0';
            for (size_t i = 1; i < s.size(); i++) {
                s[i] = (s[i] - '0' + s[i - 1] - '0') + '0';
            }
            ll num = stoll(s);
            if (num % 9 == 0) {
                cout << "YES" << endl;
                break;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
