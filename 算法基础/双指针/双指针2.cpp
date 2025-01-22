// 双指针2 最长连续不重复子序列
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int arr[N];
int S[N]; // 计数数组 
int main(void){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int res = 0;
	// 双指针过程 
	for(int i = 0, j = 0; i < n; i++){
		S[arr[i]]++;
		while(j <= i && S[arr[i]] > 1){
			S[arr[j]]--;
			j++;
		}
		res = max(res, i - j + 1);
	}
	cout << res;
	return 0;
} 
