// 函数7 求π的值
#include <bits/stdc++.h>
using namespace std;

double arctan(double x){
	double item;
	double sum = 0;
	int fenmu = 1;
	int fu = 1;
	while(abs(item)>= 1e-6){
		item = pow(x, fenmu) / fenmu * fu;
		sum += item;
		fu = -fu;
		fenmu = fenmu + 2;
	}
	sum -= item;
	return sum;
	
}
int main(void){
	double x = sqrt(3) / 3;
	printf("%.10lf\n", 6 * arctan(x));
	
	return 0;
} 
