// �ַ���12 ���ܵĲ�����
#include <bits/stdc++.h>
using namespace std;
int main(void){
	char s[55];
	cin.getline(s, 55);
	// ��һ��
	for(int i = 0; s[i]; i++){
		if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] + 3 - !!(s[i] + 3 > 'z') * 26;
		else s[i] = s[i] + 3 - !!(s[i] + 3 > 'Z') * 26;
		
	} 
	// �ڶ���
	int len = strlen(s);
	for(int i = 0; i < len / 2; i++){
		char temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	// ������
	for(int i = 0; s[i]; i++){
		if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
		else s[i] += 32;
	} 
	cout << s << endl;
	return 0;
} 
