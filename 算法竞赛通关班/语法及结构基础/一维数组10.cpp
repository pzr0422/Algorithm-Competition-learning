// 一维数组10 人工降雨
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int h[1001];  // 表示高度 
	for(int i = 0; i < n; i++){
		cin >> h[i];
	}
	int max_count = -1; 
	for(int i = 0; i < n; i++){
		// 先往当前位置左边找
		int height = h[i];
		int ind = i - 1;
		int count = 1;
		while(ind >= 0){
			if(h[ind] <= height) {
				count++;
				height = h[ind];
				ind--;
			}
			else break;
		}
		// 再往当前位置右边找 
		ind = i + 1;
		height = h[i];
		while(ind <= n - 1){
			if(h[ind] < height){
				count++;
				height = h[ind];
				ind++;
			}
			else break;
		}
		if(count > max_count) max_count = count;
	}
	cout << max_count << endl;
	return 0;
} 
