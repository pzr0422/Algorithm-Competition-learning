// Ñ­»·16 ½Ç¹È²ÂÏë
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	while(n != 1){
		if(n % 2){
			printf("%d*3+1=%d\n", n, 3 * n + 1);
			n = 3 * n + 1;
		}
		else{
			printf("%d/2=%d\n", n, n / 2);
			n /= 2;
		}
	}
	cout << "End" << endl;
	return 0;
} 
