// 一维数组8 出现次数超过一半的数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int arr[1001] = {0};
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		int count = 0;
		for(int j = 0; j < n; j++){
			if(arr[j] == arr[i]) count++;
		}
		if(count > n/2) {
			cout << arr[i] << endl;
			break;
		}
	}
	return 0;
} 
