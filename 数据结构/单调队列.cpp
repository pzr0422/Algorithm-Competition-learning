// ������������--��������
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int a[N], q[N]; // ��Ŀ�������� ��������
int n, k; // ���ڴ�СΪk 
int main(void){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int hh = 0, tt = -1; // ��ʼ����Ϊ��
	for(int i = 0; i < n; i++){
		// �ж϶���ͷ�Ƿ񻬳�����
		while(hh <= tt && i - k + 1 > q[hh]) hh++; 
		while(hh <= tt && a[q[tt]] > a[i]) tt--;
		q[++tt] = i; // ���е�ֵ���±�
		if(i >= k - 1) printf("%d", a[q[hh]]);
	}
	return 0;
} 
