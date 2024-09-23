// Ñ­»·17 3*n+1
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int count = 0;
	while(n != 1){
		if(n % 2) n = 3 * n + 1;
		else n = n / 2;
		count++;
	}
	cout << count << endl;
	return 0;
} 
