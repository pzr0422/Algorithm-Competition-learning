// ���ֲ���-����
#include <bits/stdc++.h>
#define MAX_N 10
using namespace std;
void test_binary_search(int n){
	// ����һ���������� 
	int *arr = (int *)malloc(sizeof(int) * n);
	arr[0] = rand() % 10;
	for(int i = 1; i < n; i++){
		arr[i] = arr[i - 1] + rand() % 10;
	}
	
	// ���ֲ��ҹ���
	int index = rand() % 10;
	int x = arr[index];
	printf("��ǰ����Ϊ��\n");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Ҫ���ҵ���Ϊ��%d\n", x);
	printf("��Ӧ���±�Ϊ:%d\n", index);
	int min = 0, max = n - 1; // ����ͷβָ��
	int mid = (min + max) >> 1;
	// ����д����
	while(min <= max){
		// ����ҵ�
		if(arr[mid] == x){
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
			break;
		} 
		// ��ǰ����xС 
		if(arr[mid] < x){
			min = mid + 1;
		}
		// ��ǰ����x�� 
		if(arr[mid] > x){
			max = mid - 1;
		}
		mid = (min + max) >> 1;
	} 
	 
}

int main(void){
	test_binary_search(MAX_N);
	return 0;
} 
