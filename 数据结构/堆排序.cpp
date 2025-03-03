// ������
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int h[N], size; // size����ǰ�ѵ�Ԫ�ظ���,�ɱ仯 

// up����
void up(int x){
	while(x / 2 != 0 && h[x / 2] > h[x]) {
		swap(h[x], h[x / 2]);
		x /= 2;
	}
} 

// down����
void down(int x){
	int min = x;
	if(2 * x <= size && h[2 * x] < h[min]) min = 2 * x;
	if(2 * x + 1 <= size && h[2 * x + 1] < h[min]) min = 2 * x + 1;
	// ��Сֵ���Ǹ��ڵ� 
	if(min != x){
		// ����
		swap(h[x], h[min]);
		// �ݹ����
		down(min); 
	}

} 
int main(void){
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &h[i]);
	}
	size = n;
	
	// ����
	for(int i = n / 2; i > 0; i--) down(i); // ����������һ�㣬����Ԫ�ض�Ҫִ��down������ʱ�临�Ӷ�ΪO(n)
	
	while(m--){
		// �����ǰ��Сֵ
		printf("%d ", h[1]);
		// ɾ����ǰ��Сֵ
		h[1] = h[size];
		size--;
		down(1); 
	} 
	return 0;
} 
