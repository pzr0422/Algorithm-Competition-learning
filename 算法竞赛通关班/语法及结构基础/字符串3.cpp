// ×Ö·û´®3 Êä³öÇ×ÅóºÃÓÑ´®
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[105];
	char ans[105];
	cin.getline(s, 105);
	int len = strlen(s);
	for(int i = 0; i < len - 1; i++){
		char c = s[i] + s[i + 1];
		ans[i] = c;
	} 
	ans[len - 1] = s[len - 1] + s[0];
	ans[len] = '\0';
	cout << ans << endl;
	return 0;
} 
