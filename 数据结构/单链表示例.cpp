// ����������ʾ����ʹ��˫�����߼���ģ������
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
// head->ͷָ��
// idx->��ǰʹ���±�
// e[N]->�洢�ڵ�ֵ
// ne[N]->��ǰ�ڵ���һ���ڵ���±� 
int e[N], ne[N], idx, head;

// ��ʼ������
void init(){
	head = -1; // ͷ�ڵ�ָ���
	idx = 0; // ��ǰʹ���±�Ϊ0 
} 

// ������ͷ����һ���� 
void insert_head(int x){
	e[idx] = x;
	ne[idx] = head;
	head = idx++;
} 

// ɾ����k����������������(��k�������������e[k - 1]) 
void delete(int k){
	// ɾ��ͷ�ڵ����� 
	if(!k) head = ne[head];
	else ne[k - 1] = ne[ne[k - 1]];
} 

// �ڵ�k��������������һ����
void insert_k(int k, int x){
	e[idx] = x;
	ne[idx] = ne[k - 1];
	ne[k - 1] = idx++;
} 
int main(void){
	
	return 0;
} 
