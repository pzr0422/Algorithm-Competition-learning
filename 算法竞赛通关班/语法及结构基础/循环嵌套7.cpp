// 循环嵌套7 优秀数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	//对每一个i进行判断（有几个因数？）
	int count = 0;// 计算有几个优秀数 
	for(int i = 1; i <= n; i++){
		int temp_count = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0) temp_count++;
			if(temp_count > 4) break;
		}
		if(temp_count <= 4) count++; 
	}
	cout << count;
	return 0;
} 
