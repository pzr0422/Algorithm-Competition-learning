// 结构体3 多功能结构体
#include <bits/stdc++.h>
using namespace std;
struct Haizeix {
    int a, b, c;

    void Sort() {
        if (a > b) swap(a, b);
        if (a > c) swap(a, c);
        if (b > c) swap(b, c);
    }

    void Swap(int type) {
        if (type == 1) swap(a, b);
        if (type == 2) swap(b, c);
        if (type == 3) swap(a, c);
    }

    int Calc() {
        return (long long) __gcd(a, b) * __gcd(b, c) % 100000 + a + b + c;
    }
} x;
int n, m, a;
string s;

int main() {
    cin >> n;
    while (n--) {
        cin >> x.a >> x.b >> x.c >> m;
        while (m--) {
            cin >> s;
            if (s == "S")
                x.Sort();
            else if (s == "Sw") {
                cin >> a;
                x.Swap(a);
            }
            else
                cout << x.Calc() << endl;
        }
    }
    return 0;
}
