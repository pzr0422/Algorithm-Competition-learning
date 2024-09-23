// 循环10 多项式求值2
#include <bits/stdc++.h>
using namespace std;
int main(void){
	double sum = 0;
	int sf = 1;
	int n;
	cin >> n;
	int temp = 0;
	for(int i = 1; i <= n; i++){
		temp = temp + sf * (2 * i - 1);
		sum += 1.0 / temp;
		sf = -sf;
	}
	printf("%.3lf", sum);
	return 0;
} 
