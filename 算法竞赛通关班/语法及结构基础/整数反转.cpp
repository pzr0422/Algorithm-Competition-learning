// C��������ΰ�һ��������ת
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
	cout << "������һ��������" << endl;
	int n;
	cin >> n;
	cout << reverse(n) << endl;
	return 0;
} 
