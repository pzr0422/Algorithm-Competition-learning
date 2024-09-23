// 循环嵌套10 寻找质因子
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int q;// 有几组询问
	cin >> q;
	int n;
	for(int i = 1; i <= q; i++){
		cin >> n;
		int j = 1;
		int count = 0;
		while(n != 1){
			j++;
			if(n % j == 0){
				n /= j;
				count++;
				while(n % j == 0) n /= j;
			}
		}
		cout << count << endl;
	} 
	return 0;
} 
