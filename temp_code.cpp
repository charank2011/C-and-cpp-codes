#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a; // Read the input string here
        int i, l, flag = 0;
        l = a.length();
        for (i = 0; i < l; i++) {
            if (a[i] == '0' || a[i] == '5') {
                flag++;
                break;
            }
        }
        if (flag != 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
