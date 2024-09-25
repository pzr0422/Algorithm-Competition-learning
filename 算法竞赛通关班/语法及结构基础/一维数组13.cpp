// 一维数组13 出现次数最多的数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a[1001] = {0};
	int n;
	cin >> n;
	int temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		a[temp]++;
	}
	int ans;
	int max_count = -1;
	for(int i = 0; i <= 1000; i++){
		if(a[i] > max_count){
			max_count = a[i];
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
} 
