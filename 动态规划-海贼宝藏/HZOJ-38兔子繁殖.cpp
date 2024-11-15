// HZOJ-38 Õ√◊”∑±÷≥Œ Ã‚
#include <bits/stdc++.h>
using namespace std;
const int maxn = 100;
long long  mem[maxn + 5] = {0};
long long f(int n){
	if(n <= 2) return n;
	if(mem[n]) return mem[n];
	mem[n] = f(n - 1) + f(n - 2);
	return mem[n];
}
int main(void){
	int n;
	cin >> n;
	cout << f(n) << endl;
	return 0;
} 
