// �ַ���2_2 ͳ��Сд��ĸ������ʹ��string�� 
#include <bits/stdc++.h>
using namespace std;
int main(void){
	string s;
	getline(cin, s);
	int len = s.size();
	int count = 0;
	for(int i = 0; i < len; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
