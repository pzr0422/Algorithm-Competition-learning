// 字符串11 统计数字字符个数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[230];
	cin.getline(s, 230);
	int cnt = 0;
	for(int i = 0; s[i]; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
} 
