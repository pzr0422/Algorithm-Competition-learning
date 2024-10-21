// 字符串8 取代字符串中特定字符串
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char a[1005];
	char b[1005];
	char c[1005];
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	int len_a = strlen(a);
	int len = strlen(b);
	int flag = 1; // 表示a的子串与b相同 
	for(int i = 0; i < len_a; i++){
		for(int j = 0; j < len; j++){
			if(a[i + j] != b[j]) {
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			cout << c;
			i = i + len - 1;
		}
		else{
			cout << a[i];
		}
		flag = 1;
	}
	return 0;
} 
