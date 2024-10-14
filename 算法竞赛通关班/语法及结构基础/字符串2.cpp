// 字符串2 统计小写字母个数(字符数组如何输入整行)
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[266];
	cin.getline(s, 266);
	int len = strlen(s);
	int count = 0;
	for(int i = 0; i < len; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			count++;
		}
	}
	cout << count << endl;
	return 0;
} 
