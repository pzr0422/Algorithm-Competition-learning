// 分支6 约会
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a, b, step;
	cin >> a >> b >> step;
	if((step - abs(a) - abs(b)) % 2 == 0 && step >= abs(a) + abs(b)) cout << "Yes";
	else cout << "No";
	return 0;
} 
