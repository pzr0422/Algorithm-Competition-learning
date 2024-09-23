// 循环13 斐波那契数列 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int a = 1;
	int b = 1;
	if(n == 1) cout << 1;
	if(n == 2) cout << 1 << " " << 1;
	else{
		cout << 1 << " " << 1 << " ";
		int temp = 0;
		for(int i = 3; i <= n; i++)	{
			temp = a + b;
			a = b;
			b = temp;
			cout << temp << " ";
		}
	}
	return 0;
}
