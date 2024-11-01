#include <bits/stdc++.h>
using namespace std;

int main(void) {
    struct pzr {
        int length;
        int a[33];
        int b[33];
    };
    
    int n;
    cin >> n;
    pzr p; // Declare an instance of the struct

    for(int i = 0; i < n; i++) { // Use < n instead of <= n
        int len;
        cin >> len;
        p.length = len; // Use the instance p
        for(int j = 1; j <= len; j++) { // Use j for the inner loops
            cin >> p.a[j] >> p.b[j]; // Index from 0
        }
        for(int j = 1; j <= len; j++) { // Index from 0
            // Odd case
            if(j % 2 == 1) {
                cout << max(p.a[j], p.b[j]) << endl; // Adjusted for 0-based index
            }
            // Even case
            else {
                cout << min(p.a[j], p.b[j]) << endl; // Adjusted for 0-based index
            }
        }
    }
    
    return 0;
}

