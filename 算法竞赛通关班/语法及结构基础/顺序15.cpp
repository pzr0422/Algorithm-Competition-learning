//顺序15 分数求和
#include <bits/stdc++.h>
using namespace std;

int main(void){
	double sum = 0;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		double temp = i * (i + 1);
		sum += 1 / temp;
	}
	printf("%.2lf", sum);
	return 0;
} 
