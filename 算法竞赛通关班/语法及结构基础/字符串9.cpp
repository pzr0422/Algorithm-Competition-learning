// 字符串9 统计字符
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[100010];
	int cnt[128]; // ASCII码所对应的桶 
	// 这里不断读入单词，以空格换行等为分隔符，在读到EOF时结束循环 
	while(cin >> s){
		for(int i = 0; s[i]; i++){
			cnt[s[i]]++;
		}
	}
	for(char c = 'a'; c <= 'z'; c++){
		if(cnt[c] > 0){
			cout << c << ':' << cnt[c] << endl;
		}
	}
	return 0;
} 
