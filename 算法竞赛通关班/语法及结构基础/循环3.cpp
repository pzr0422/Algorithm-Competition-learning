//循环3 输出整数 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for(int i = 1; i <= n ; i++){
		if(i % 3 != 0) continue;
		int temp = i;
		while(temp){
			if((temp % 10) == 5){
				cout << i << endl;
				break;
			}
			temp /= 10;
		} 
	}
	return 0;
} 
