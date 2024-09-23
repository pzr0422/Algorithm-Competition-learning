// 循环12 NOIP2012-J-1-质因数分解
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int p1 = 2, n;
	cin >> n;
	while(n % p1 != 0) p1++;
	cout << n / p1;
	return 0;
}
/*
int ifzhi(int n){
	int flag = 1;
	for(int i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0) flag = 0;
	}
	return flag;
}
int main(void){
	int n;
	cin >> n;
	int bd = (int)sqrt(n);
	int zhi;
	for(int i = n; i >= bd; i--){
		if(ifzhi(i)){
			if(n % i == 0){
				zhi = i;
				break;
			}
		}
	}
	cout << zhi;
	return 0;
} 
*/
