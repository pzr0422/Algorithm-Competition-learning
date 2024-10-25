// ×Ö·û´®15 PĞÍ±àÂë
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[1005];
	cin.getline(s, 1005);
	char current;
	current = s[0];
	int cnt = 0;
	for(int i = 0; s[i]; i++){
		if(s[i] == current){
			cnt++;
		}
		else{
			cout << cnt << current;
			cnt = 1;
			current = s[i];
		}
	}
	cout << cnt << current;
	return 0;
} 
