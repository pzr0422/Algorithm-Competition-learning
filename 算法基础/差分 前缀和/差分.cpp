// ���1(�ص��ڶ��ѯ���и����ȶ�����)
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N]; // ǰ׺������
int b[N]; // ������� 

void insert(int l, int r, int c){
	b[l] += c;
	b[r + 1] -= c;
}

int main(void){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	// ���������飨ʹ��Insertģ�壩 
	for(int i = 1; i <= n; i++) insert(i, i, a[i]); // ��Ч�� b[i] = a[i] - a[i - 1];
	
	// m����ѯ
	int l, r, c;
	while(m--){
		cin >> l >> r >> c;
		insert(l, r, c);
	} 
	// ��ԭǰ׺�����飨ֱ����b�ϲ�����
	for(int i = 1; i <= n; i++) b[i] += b[i - 1];
	
	// ��ӡ���ս��
	for(int i = 1; i <= n; i++) cout << b[i] << ' ';
} 
/*
�Լ���д�� 
int main(void){
	ios::sync_with_stdio(false); // ȡ��ͬ��
	int n, m;
	cin >> n >> m;
	a[0] = 0; // û��Ҫд��һ�� 
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	// ����������
	for(int i = 1; i <= n; i++){
		b[i] = a[i] - a[i - 1];
	} 
	
	int l, r, c; // l,r�Ǵ��±�1��ʼ�� 
	while(m--){
		cin >> l >> r >> c;
		b[l] += c;
		b[r + 1] -= c;
	}
	
	// ��ԭǰ׺������
	for(int i = 1; i <= n; i++){
		a[i] = a[i - 1] + b[i];
	} 
	
	// ��ӡ
	for(int i = 1; i <= n; i++){
		cout << a[i] << ' ';
	} 
	return 0;
} 
*/


