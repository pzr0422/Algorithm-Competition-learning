// ×Ö·û´®4 Åä¶Ô¼î»ùÁ´
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[515];
	char ans[515];
	cin.getline(s, 515);
	int len = strlen(s);
	for(int i = 0; i < len; i++){
		if(s[i] == 'A') ans[i] = 'T';
		if(s[i] == 'T') ans[i] = 'A';
		if(s[i] == 'C') ans[i] = 'G';
		if(s[i] == 'G') ans[i] = 'C';
	}
	ans[len] = '\0';
	cout << ans << endl;
	return 0;
} 
