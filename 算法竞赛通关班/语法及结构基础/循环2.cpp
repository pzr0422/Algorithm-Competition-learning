//ѭ��2 ������ֵ
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int sf = 1;
	int n;
	cin >> n;
	int sum;
	for(int i = 1; i <= n; i++){
		sum += sf * i;
		sf = -sf;
	}
	cout << sum;
	return 0;
} 
