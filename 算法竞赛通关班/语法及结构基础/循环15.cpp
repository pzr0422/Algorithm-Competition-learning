// 循环15 级数求和
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int k;
	cin >> k;
	double sum = 0;
	int i = 0;
	while(sum <= k){
		i++;
		sum += 1.0 / i;
	}
	cout << i;
	return 0;
} 
 
