// Ñ­»·Ç¶Ì×5 ½×³ËÇóºÍ
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int temp = 1;
	int sum = 0;
	for(int i = 1; i <= n; i++){
		temp *= i;
		sum += temp;
	}
	cout << sum; 
	return 0;
}
