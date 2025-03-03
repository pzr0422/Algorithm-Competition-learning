// ��ϣ��������ʾ��
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 3;

int h[N], e[N], ne[N], idx, n; // �����h[N]��Ϊͷָ�룬���������κ�Ԫ�� 

void insert(int x){
	// �����ϣֵk
	int k = (x % N + N) % N; // +N��֤���Ϊ����
	// �����Ӧ������
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++; 
}

bool find(int x){
	int k = (x % N + N) % N;
	int p = h[k];
	while(p != -1){
		if(e[p] == x) return true;
		p = ne[p];
	}
	return false;
}
int main(void){
	// ����>Ԫ�ظ�������С����,���ڹ�ϣ�����е�ģ��������100003
	
	scanf("%d", &n); // �������� 
	// ��ʼ������Ԫ��Ϊ-1������սڵ��ʾΪ-1�� 
	memset(h, -1, sizeof(h));
	
	while(n--){
		char op[2];
		int x;
		scanf("%s%d", op, &x);
		// ������� 
		if(op[0] == 'I'){
			insert(x);
		}
		// ��ѯ����
		else{
			if(find(x)) puts("Yes");
			else puts("No");
		} 
	}
	
} 
