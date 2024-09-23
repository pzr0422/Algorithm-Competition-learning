// 循环15 镂空长方形
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n,m;
	cin >> n >> m;
	if(n <= m){
		int temp;
		temp = n;
		n = m;
		m = temp;
	}
	for(int i = 1; i <= m; i++) cout << '*';
	cout << endl;
	for(int i = 1; i <= n - 2; i++){
		cout << '*';
		for(int j = 1; j <= m - 2; j++) cout << " ";
		cout << '*';
		cout << endl;
	}
	for(int i = 1; i <= m; i++) cout << '*';
	cout << endl; 
	cout << 2 * m + 2 * (n - 2) << endl;
	return 0;
} 
