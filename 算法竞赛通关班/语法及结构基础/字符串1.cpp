// 字符串1 石头剪刀布（如何读入字符串） 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	char s[22], t[22];
	for(int i = 0; i < N; i++){
		cin >> s >> t;
		if(s[0] == t[0]){
			cout << "Tie" << endl;
		}
		if(s[0] == 'R' && t[0] == 'S' || s[0] == 'S' && t[0] == 'P' || s[0] == 'P' && t[0] == 'R'){
			cout << "Player1" << endl;
		}
		if(s[0] == 'S' && t[0] == 'R' || s[0] == 'P' && t[0] == 'S' || s[0] == 'R' && t[0] == 'P'){
			cout << "Player2" << endl;
		}
	}
	return 0;
} 
