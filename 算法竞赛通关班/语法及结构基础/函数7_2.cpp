// º¯Êý7_2 
#include <bits/stdc++.h>
using namespace std;

double arctanx(double x) {
    double sum = 0, fz = x, fm = 1, flag = 1;
    for (;;) {
        sum += flag * fz / fm;
        flag = -flag;
        fz *= x * x;
        fm += 2;
        if (fz / fm < 1e-6)
            break;
    }
    return sum;
}

int main() {
    printf("%.10lf\n", 6 * arctanx(1 / sqrt(3)));
    return 0;
} 
