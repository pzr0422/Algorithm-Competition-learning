// 字符串12 加密的病历单
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[55];
	cin.getline(s, 55);
	// 第一步
	for(int i = 0; s[i]; i++){
		if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] + 3 - !!(s[i] + 3 > 'z') * 26;
		else s[i] = s[i] + 3 - !!(s[i] + 3 > 'Z') * 26;
		
	} 
	// 第二步
	int len = strlen(s);
	for(int i = 0; i < len / 2; i++){
		char temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	// 第三步
	for(int i = 0; s[i]; i++){
		if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
		else s[i] += 32;
	} 
	cout << s << endl;
	return 0;
} 
