// 循环嵌套17 原材料加工
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n, a, b;
	cin >> n >> a >> b;
	int count1 = n / a;
	int count2 = n / b;
	int rest_min = n;
	for(int i = 0; i <= count1; i++){
		int temp = n;
		int rest_b = temp - i * a;
		int rest = (rest_b) % b;
		if(rest < rest_min) rest_min = rest;
	}
	cout << rest_min;
	return 0;
} 
