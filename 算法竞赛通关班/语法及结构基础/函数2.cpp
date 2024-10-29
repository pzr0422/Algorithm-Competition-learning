// 函数2 序列生成1
#include <bits/stdc++.h>
using namespace std;
int F(int n){
	if(n == 1) return 2;
	else return F(n - 1) + 2;
}
int main(void){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cout << F(i) << endl;
	}
	return 0;
} 
