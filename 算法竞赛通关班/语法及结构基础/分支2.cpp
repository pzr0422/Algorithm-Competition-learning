// 分支2 maoge的数学测试
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int x;
	double y;
	cin >> x;
	if(x < 2){
		y = x;
		printf("%.2lf", y);
	}
	else if(x < 6){
		y = pow(x, 2) + 1;
		printf("%.2lf", y);
	}
	else if(x < 10){
		y = sqrt(x + 1);
		printf("%.2lf", y);
	}
	else{
		y = 1.0 / (x + 1);
		printf("%.2lf", y);
	}
	return 0;
} 
