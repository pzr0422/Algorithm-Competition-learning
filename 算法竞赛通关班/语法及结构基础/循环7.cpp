// Ñ­»·7 Ïã½¶Ê÷
#include <bits/stdc++.h>
using namespace std;
int main(void){
	double m, b;
	cin >> m >> b;
	long long x = 0, y, ans = 0;
	while(x <= b * m){
		y = floor(-x / m + b);
		long long temp = (1 + x) * x / 2 * (y + 1) + (y + 1) * y / 2 * (x + 1);  
		if (temp > ans) ans = temp;
		x++;
	}
	cout << ans << endl;
	return 0;
} 
