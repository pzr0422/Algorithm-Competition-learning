// ˫����ʾ�� ������ָ������l����ָ������r��ģ���߼�
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// �ֱ��ǵ�ǰ�ڵ�ֵ����ǰ�ڵ���ߵ��±꣬��ǰ�ڵ��ұߵ��±꣬��ǰ����ʹ�õ��±� 
int e[N], l[N], r[N], idx;

// ��ʼ��(0��ʾͷ�ڵ㣬1��ʾβ���)
void init(){
	r[0] = 1, l[1] = 0;
	idx = 2;
} 

// �������(ע�����˳���ȸ��ұߵĵ�)
void insert(int k, int x){
	e[idx] = x;
	r[idx] = r[k];
	l[idx] = k;
	// k�ұߵĽڵ� 
	l[r[k]] = idx;
	// k 
	r[k] = idx;
	
} 

// ɾ������
void delete(int k){
	l[r[k]] = l[k];
	r[l[k]] = r[k];
} 
int main(void){
	
	return 0;
} 
 
