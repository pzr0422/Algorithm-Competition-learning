// 循环20 调和级数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int k;
	cin >> k;
	int n = 0;
	double sum = 0;
	while(sum < k){
		n++;
		sum += 1.0 / n;
	}
	cout << n << endl;
	return 0;
} 
