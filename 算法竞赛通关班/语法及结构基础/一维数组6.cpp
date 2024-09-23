// 一维数组6 最大数对
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n, m;
	cin >> n >> m;
	int max1 = -1;
	int max2 = -1;
	int temp = 0;
	for(int i = 0; i < n; i++){
		cin >> temp;
		if(temp > max1) max1 = temp;
	}
	for(int i = 0; i < m; i++){
		cin >> temp;
		if(temp > max2) max2 = temp;
	}
	cout << max1 + max2 << endl;
	
	return 0;
} 
