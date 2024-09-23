// 分支8 自动找人系统
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a1, b1, c1, a2, b2, c2, a3, b3, c3;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3;
	int t1 = a1 * 10000 + b1 * 100 + c1;
	int t2 = a2 * 10000 + b2 * 100 + c2;
	int t3 = a3 * 10000 + b3 * 100 + c3;
	if(t1 <= t2){
		if(t1 <= t3 && t3 <= t2) cout << "Yes";
		else cout << "No";
	}
	else{
		int temp = t1;
		t1 = t2;
		t2 = temp;
		if(t1 <= t3 && t3 <= t2) cout << "Yes";
		else cout << "No";
	}
	return 0;
} 
