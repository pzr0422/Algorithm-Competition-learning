// 分支12 企业奖金
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	if(n <= 10){
		printf("%.2lf", 0.1 * n);
	}
	else if(n <= 20){
		printf("%.2lf", 1 + 0.075 * (n - 10));
	}
	else if(n <= 40){
		printf("%.2lf", 1.75 + 0.05 * (n - 20));
	}
	else if(n <= 60){
		printf("%.2lf", 2.75 + 0.03 * (n - 40));
	}
	else if(n <= 100){
		printf("%.2lf", 3.35 + 0.015 * (n - 60));
	}
	else{
		printf("%.2lf", 3.95 + 0.01 * (n - 100));
	}
	return 0;
} 
