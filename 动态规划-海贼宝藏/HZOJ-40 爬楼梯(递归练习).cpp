// HZOJ-40 ลภยฅฬÝ(ตÝน้มทฯฐ)
#include <bits/stdc++.h>
using namespace std;
// ผวาไปฏตÝน้
long long arr[501];

long long f(int n){
	if(arr[n]) return arr[n];
	else arr[n] = f(n - 2) + f(n - 3);
	return arr[n];
}
int main(void){
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1; 
	int n;
	cin >> n;
	cout << f(n) << endl;
	return 0;
}
 
