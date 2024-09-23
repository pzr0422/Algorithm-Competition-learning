// 一维数组7
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int arr[11] = {0};
	int temp[22];
	for(int i = 0; i < n; i++){
		cin >> temp[i];
		arr[temp[i]]++;
	}
	int max = -1; // 记录最多出现次数 
	int ans = 0; // 记录最多出现次数所对应的下标（也就是对应的数） 
	for(int i = 0; i < 11; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	for(int i = 0; i < n; i++){
		if(arr[temp[i]] == max){
			cout << temp[i] << endl;
			break;
		}
	}
	return 0;
} 
