// Ñ­»·Ç¶Ì×2 Êý×ÖÂ©¶· 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < i; j++){
			printf(" ");
		}
		for(int k = 2*(m-i)-1; k >= 1; k--){
			printf("%d", m - i);
		}
		printf("\n");
	}
	for(int i = m - 1; i >= 1; i--){
		for(int j = 0; j < i - 1; j++){
			printf(" ");
		}
		for(int k = 2 *(m - i) + 1; k >= 1; k--){
			printf("%d", m - i + 1);
		}
		printf("\n");
	}
	return 0;
} 
