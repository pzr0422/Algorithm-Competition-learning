// Ñ­»·11 ·ê7±Ø¹ý
#include <bits/stdc++.h>
using namespace std;
int main(void){
	for(int i = 10; i <= 98; i++){
		int a = i % 10;
		int b = i / 10;
		if(i % 7 == 0 || a == 7 || b == 7) cout << "pass!" << " ";
		else cout << i << " ";
	}
	cout << 99;
	return 0;
} 
