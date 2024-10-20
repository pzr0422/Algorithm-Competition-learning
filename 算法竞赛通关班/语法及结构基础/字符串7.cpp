// ×Ö·û´®7 ¿­Èö¼ÓÃÜÊõ
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[105];
	char ans[105];
	scanf("%s", s);
	int t;
	cin >> t;
	t = t % 26;
	int len = strlen(s);
	for(int i = 0; i < len; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			ans[i] = s[i] + t - !!(s[i] + t > 'z') * 26;
		}
		else{
			ans[i] = s[i] + t - !!(s[i] + t > 'Z') * 26;
		}
	}
	ans[len] = '\0';
	cout << ans << endl;
	return 0;
} 
