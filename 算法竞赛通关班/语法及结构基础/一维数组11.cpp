// 一维数组11 校门外的树
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int L, M;
	cin >> L >> M;
	int a[10002] = {0};
	int left[100];
	int right[100];
	for(int i = 0; i < M; i++){
		cin >> left[i] >> right[i];
	}	
	for(int i = 0; i < M; i++){
		for(int j = left[i]; j <= right[i]; j++){
			a[j] = 1;
		}
	}
	int count = 0;
	for(int i = 0; i <= L; i++){
		if(!a[i]) count++;
	}
	cout << count << endl;
	return 0;
}
