// 结构体4 结构体中的结构体
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;

struct A {
    int a, b;
    string s;
} a[maxn];

struct B {
    int len, a[33];
    string s;
} b[maxn];

struct C {
    A a;
    B b;
} c[maxn];

int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].a >> a[i].b >> a[i].s;
        c[i].a = a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i].len;
        for (int j = 1; j <= b[i].len; j++)
            cin >> b[i].a[j];
        cin >> b[i].s;
        c[i].b = b[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << c[i].a.a << " " << c[i].a.b << " "
            << c[i].a.s << " ";
        for (int j = 1; j <= c[i].b.len; j++)
            cout << c[i].b.a[j] << " ";
        cout << c[i].b.s << endl;
    }
    return 0;
}
