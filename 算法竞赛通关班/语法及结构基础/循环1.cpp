// —≠ª∑1 º∆À„f(n)
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int sum;
	for(int i = 1; i <= n; i++){
		sum += pow(i, 2) + 2;
	}
	cout << sum;
	return 0;
} 
