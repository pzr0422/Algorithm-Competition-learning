// �ַ���10 ����ͳ��
#include <bits/stdc++.h>
using namespace std;
int main(void){
	string s;
	getline(cin, s);
	stringstream ss(s);
	int cnt;
	while(ss >> s){
		cnt++;
	}
	cout << cnt << endl;
	return 0;
} 
