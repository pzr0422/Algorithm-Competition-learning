// 字符串13 基因相关性
#include <bits/stdc++.h>
using namespace std;
int main(void){
	double num;
	cin >> num;
	char s1[505];
	char s2[505];
	cin >> s1 >> s2;
	int cnt = 0;
	int len = strlen(s1);
	for(int i = 0; s1[i]; i++){
		if(s1[i] == s2[i]) cnt++;
	} 
	double rate = 1.0 * cnt / len;
	if(rate >= num) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
} 
