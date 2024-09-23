// 分支13 年龄计算
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int y1, m1, d1, y2, m2, d2;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	int t1 = y1 * 10000 + m1 * 100 + d1;
	int t2 = y2 * 10000 + m2 * 100 + d2;
	if(t1 > t2) cout << -1 << endl;
	int d = m2 * 100 + d2 - (m1 * 100 + d1);
	if(d >= 0){
		cout << y2 - y1;
	}
	else{
		cout << y2 - y1 - 1;
	}
	return 0;
} 
