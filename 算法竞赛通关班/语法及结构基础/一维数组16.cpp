// 一维数组16 凹凸曼打怪兽
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int X;
	int power[501];
	cin >> X;
	int temp;
	int sum = 0;
	int len = 0;
	int count = 0;
	while(cin >> temp){
		power[len] = temp;
		sum += temp;
		if(sum > X){
			sum = temp;
			count++;
		}
		len++;
	}
	cout << count + 1 << endl;
	for(int i = 0; i < len; i++){
		printf("%.1lf", 1.2 * power[i]);
		cout << ' ';
	}
	return 0;
} 
