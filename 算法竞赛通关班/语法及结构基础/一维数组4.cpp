// 一维数组4 不与最大数相同的数字之和
#include <bits/stdc++.h>
using namespace std;
int a[105];
int main(void){
	int N;
	cin >> N;
	int temp;
	int sum = 0;
	int max = -1001;
	for(int i = 0; i < N; i++){
		cin >> temp;
		a[i] = temp;
		if(temp > max) max = temp;
	}
	for(int i = 0; i < N; i++){
		if(a[i] != max) sum += a[i];
	}
	cout << sum;
	return 0;
} 
