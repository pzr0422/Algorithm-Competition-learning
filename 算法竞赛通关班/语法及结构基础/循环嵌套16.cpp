// 循环嵌套16 我家的门牌号
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for(int m = 1; ; m++){
		int sum = (1 + m) * m / 2;
		if(sum <= n) continue;
		if((sum - n) % 3) continue;
		int x = (sum - n) / 3;
		if (x < 1 || x > m) continue;
		cout << x << " " << m << endl;
		break;
	}
	return 0;
} 
