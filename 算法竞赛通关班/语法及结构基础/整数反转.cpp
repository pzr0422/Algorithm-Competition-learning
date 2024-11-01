// C语言中如何把一个整数反转
#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
	int a, ans = 0;
	while(n){
		a = n % 10;
		n /= 10;
		ans = ans * 10 + a;
	}
	return ans;
}
int main(void){
	cout << "请输入一个整数：" << endl;
	int n;
	cin >> n;
	cout << reverse(n) << endl;
	return 0;
} 
