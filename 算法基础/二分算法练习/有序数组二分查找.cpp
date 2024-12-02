// 二分查找-数组
#include <bits/stdc++.h>
#define MAX_N 10
using namespace std;
void test_binary_search(int n){
	// 生成一个有序数组 
	int *arr = (int *)malloc(sizeof(int) * n);
	arr[0] = rand() % 10;
	for(int i = 1; i < n; i++){
		arr[i] = arr[i - 1] + rand() % 10;
	}
	
	// 二分查找过程
	int index = rand() % 10;
	int x = arr[index];
	printf("当前数组为：\n");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("要查找的数为：%d\n", x);
	printf("对应的下标为:%d\n", index);
	int min = 0, max = n - 1; // 定义头尾指针
	int mid = (min + max) >> 1;
	// 递推写法？
	while(min <= max){
		// 如果找到
		if(arr[mid] == x){
			printf("找到了，下标为%d\n", mid);
			break;
		} 
		// 当前数比x小 
		if(arr[mid] < x){
			min = mid + 1;
		}
		// 当前数比x大 
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
