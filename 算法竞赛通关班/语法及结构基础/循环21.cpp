// 循环21 回文数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x = i;
		int y = 0;
		int temp;
		while(x){
			temp = x % 10;
			y = y * 10 + temp;
			x /= 10;
		}
		if(y == i) cout << i << endl;
	}
	return 0;
} 
