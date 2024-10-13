// 二维数组5 Tangent的简单矩阵
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int arr[105][105];
	int N, M;
	cin >> N >> M;
	long long sum[105] = {0};
	long long max_sum = LLONG_MIN;
	int index = -1;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			sum[i] += arr[i][j];
		}
		cout << sum[i] << endl;
		if(sum[i] > max_sum){
			index = i;
			max_sum = sum[i];
		}
	}
	cout << index + 1 << endl;
	return 0;
} 
