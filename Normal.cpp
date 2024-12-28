/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-15,21:09:40
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void mhm() {
    string a;
    cin >> a; 
    string b = "";
    for (char c : a) {
        if (c == 'p') {
            b += 'q';
        } else if (c == 'q') {
            b += 'p'; 
        } else if (c == 'w') {
            b += 'w'; 
        } else {
          b += c;
        }
    }
reverse(b.begin(),b.end());
    cout << b << endl; 
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        mhm();
    }
    return 0;
}
