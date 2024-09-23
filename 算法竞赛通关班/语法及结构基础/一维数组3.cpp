// 一维数组3 年龄与疾病
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	int temp;
	int a = 0, b = 0, c = 0, d = 0;
	for(int i = 0; i < N; i++){
		cin >> temp;
		if(temp <= 18){
			a++;
		}
		else if(temp <= 35){
			b++;
		}
		else if(temp <= 60){
			c++;
		}
		else{
			d++;
		}
	}
	printf("%.2lf\%\n", 1.0 * a / N * 100);
	printf("%.2lf\%\n", 1.0 * b / N * 100);
	printf("%.2lf\%\n", 1.0 * c / N * 100);
	printf("%.2lf\%\n", 1.0 * d / N * 100);
	
	return 0;
} 
