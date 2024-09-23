// 分支3 从大到小
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a, b, c;
	cin >> a >> b >> c;
	if(a < b){
		if(b < c){
			printf("%d %d %d", c, b, a);
		}
		else{
			if(a < c) printf("%d %d %d", b, c, a);
			else printf("%d %d %d", b, a, c);
		}
	}
	else{
		if(b > c){
			printf("%d %d %d", a, b, c);
		}
		else{
			if(a > c) printf("%d %d %d", a, c, b);
			else printf("%d %d %d", c, a, b);
		}
	}
	return 0;
} 
