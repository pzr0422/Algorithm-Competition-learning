// �ַ���9 ͳ���ַ�
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[100010];
	int cnt[128]; // ASCII������Ӧ��Ͱ 
	// ���ﲻ�϶��뵥�ʣ��Կո��е�Ϊ�ָ������ڶ���EOFʱ����ѭ�� 
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
