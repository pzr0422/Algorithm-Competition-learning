// 循环19 球弹跳高度的计算
#include <bits/stdc++.h>
using namespace std;
int main(void){
	double h;
	cin >> h;
	double sum = 0;
	for(int i = 1; i <= 10; i++){
		sum += 1.5 * h;
		h /= 2;
	} 
	cout << sum - h << endl;
	cout << h << endl;
	
	return 0;
} 
