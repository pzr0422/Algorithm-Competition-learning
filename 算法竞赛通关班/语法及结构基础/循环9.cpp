// ѭ��9 ������˶���
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int x, n;
	cin >> x >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++){
		if(x <= 5) sum += 250;
		x++;
		if(x == 8) x = 1;
 	}
	cout << sum << endl;
	return 0;
} 
