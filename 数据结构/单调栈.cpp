// ����ջ����
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int stk[N], tt; // ջ�����ջ�� �±��1��ʼ 
int n; 

int main(void){
	ios:sync_with_stdio(false);
	cin >> n;
	int x;
	for(int i = 0; i < n; i++){
		cin >> x;
		while(tt && stk[tt] >= x) tt--; // ά������ջ�����ջ��Ԫ�ش��ڵ�ǰ�������ʱ��ջ��Ԫ�ز����ܳ�Ϊ��
		// ����ѭ���󣬴�ʱ��ջ��Ԫ�ؾ��Ǵ�
		if(tt) cout << stk[tt] << ' ';
		else cout << - 1 << ' ';
		stk[++tt] = x;
	}
	return 0;
} 
