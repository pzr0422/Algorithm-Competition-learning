// Ñ­»·Ç¶Ì×8 maogeÊıÊı
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int l, r;
	cin >> l >> r;
	int count0 = 0;
	int count1 = 0;
	for(int i = l; i <= r; i++){
		int temp = i;
		while(temp){
			if(temp & 1) count1++;
			else count0++;
			temp >>= 1;
		}
	}
	cout << count1 << " " << count0;
	return 0;
} 
