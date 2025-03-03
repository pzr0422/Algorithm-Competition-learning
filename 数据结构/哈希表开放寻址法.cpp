// ��ϣ����Ѱַ��
#include <bits/stdc++.h>
using namespace std;

// �����СҪ������ĿҪ���2~3����ҲҪ�������� 
const int N = 2e6 + 3, null = 0x3f3f3f3f; // �涨һ��nullֵ������ϣ���һ��λ�õ������ֵ����ʾ��ϣ��˴�Ϊ�գ����Դ洢 

int h[N];

// ���ģ�find���� --> ���Ҫ�ҵ����ڹ�ϣ���У�������������ڵ�λ�ã�������ڣ���ô����Ӧ�ô洢��λ�� 
int find(int x){
	// �����ϣֵ
	int k = (x % N + N) % N;
	
	while(h[k] != null && h[k] != x){
		k++;
		if(k == N) k = 0; // ���ƶ�����ϣ�����β�����ɱ�ռ�ã���ת�Ƶ���ͷ����Ѱ�� 
	}
	
	return k;
}

int main(void){
	memset(h, 0x3f, sizeof(h)); // ע��memset���õĵ�λ���ֽ� 
	int n;
	scanf("%d", &n);
	while(n--){
		char op[2];
		int x;
		scanf("%s%d", op, &x);
		int idx = find(x);
		// ������� 
		if(op[0] == 'I'){
			h[idx] = x;
		}
		// ��ѯ����
		else{
			if(h[idx] == null) puts("No");
			else puts("Yes");
		} 
	}
	return 0;
} 
