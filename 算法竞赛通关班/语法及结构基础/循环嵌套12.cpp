// 循环嵌套12 多项式求值1
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int below = 0;
	long long a = 1;
	long long b = 1;
	long long above = 0;
	double sum = 0;
	int coe = 1;
	for(int i = 1; i <= n; i++){
		below += coe * (2 * i - 1);
		if(i == 1 || i == 2) above = 1;
		else{
			above = a + b;
			b = above;
			a = b - a;
		}
		sum += 1.0 * above / below;
		coe = - coe;
	}
	printf("%.2lf", sum);
	return 0;
} 
