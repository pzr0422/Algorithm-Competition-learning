//// 字符串8 取代字符串中特定字符串(函数优化版)
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char a[1005], b[1005], c[1005];
	cin >> a >> b >> c;
	int la = strlen(a);
	int lb = strlen(b);
	for(int i = 0; i < la; ){
		if(!strncmp(a + i, b, lb)){
			i += lb;
			cout << c;
		}
		else{
			cout << a[i++];
		}
	}
	return 0;
} 
