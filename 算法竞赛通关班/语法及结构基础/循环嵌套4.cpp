// 循环嵌套4 xo矩阵
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int m;
	cin >> m;
	// 前m行 
	for(int i = 1; i <= m; i++){
		for(int j = 1; j < i; j++) cout << 'o';
		cout << 'x';
		for(int k = 1; k <= 2*(m-i)+1; k++) cout << 'o';
		cout << 'x';
		for(int n = 1; n < i; n++) cout << 'o';
		cout << endl;
	}
	// 中间1行 
	for(int i = 1; i <= m; i++){
		cout << 'o';
	}
	cout << 'x';
	for(int i = 1; i <= m; i++){
		cout << 'o';
	}
	cout << endl;
	// 后m行 
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= m - i; j++) cout << 'o';
		cout << 'x';
		for(int k = 1; k <= 2*i-1; k++) cout << 'o';
		cout << 'x';
		for(int n = 1; n <= m - i; n++) cout << 'o';
		cout << endl;
	}
	return 0;
} 
