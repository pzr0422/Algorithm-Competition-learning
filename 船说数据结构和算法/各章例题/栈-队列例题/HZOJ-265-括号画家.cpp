// HZOJ-265-���Ż���
#include <bits/stdc++.h>
using namespace std;
#define MAX_N 10000
char str[MAX_N + 5];
int match[MAX_N + 5] = {0};//match[i]=0������i��λ�õ�����û����֮ƥ������ţ���match[i]=c����ô��i��λ�õ����ŵ�ƥ�����±�Ϊc 
stack<int> s;
int main(void){
	cin >> (str + 1);//ʹ�ַ�������±��1��ʼ���ܿ�0�Է�����match���� 
	for(int i = 1; str[i]; i++){
		switch(str[i]){
			case '(':
			case '[':
			case '{':
				s.push(i);
				break;
			case ')':
				if(!s.empty() && str[s.top()] == '('){
					match[s.top()] = i;
					match[i] = s.top();
					s.pop();
				}
				else{
					s.push(i);//��Ϣ���������������Ų�ƥ�䣬��˵��ǰ����������о��Ƿ� 
				}
				break;
			case ']': 
				if(!s.empty() && str[s.top()] == '['){
					match[s.top()] = i;
					match[i] = s.top();
					s.pop();
				}
				else{
					s.push(i);//��Ϣ���������������Ų�ƥ�䣬��˵��ǰ����������о��Ƿ� 
				}
				break;
			case '}':
				if(!s.empty() && str[s.top()] == '{'){
					match[s.top()] = i;
					match[i] = s.top();
					s.pop();
				}
				else{
					s.push(i);//��Ϣ���������������Ų�ƥ�䣬��˵��ǰ����������о��Ƿ� 
				}
				break;
		}
	}
	//Ѱ�������
	int temp_ans = 0;
	int ans = 0;
	int i = 1;
	while(str[i]){
		//�����i��λ����ƥ������� 
		if(match[i]){
			temp_ans += match[i] - i + 1;
			i = match[i] + 1;
		}
		//��ǰλ��û��ƥ������� 
		else{
			i++;
			temp_ans = 0;
		}
		if(temp_ans > ans) ans = temp_ans;
	} 
	cout << ans;
	return 0;
}

