// 分支11 计算邮资
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	char c;
	cin >> n >> c;
	if(n <= 1000){
		if(c == 'y') cout << 13 << endl;
		else cout << 8 << endl;
	}
	else{
		int temp = (n - 1000) / 500 + !!((n - 1000) % 500);
		if(c == 'y') cout << 13 + temp * 4 << endl;
		else cout << 8 + temp * 4 << endl;
	}
	return 0;
} 
