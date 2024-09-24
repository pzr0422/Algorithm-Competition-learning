// 一维数组9 合并有序数组
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a1[100001];
	int a2[100001];
	int a3[200002];
	int temp = 0;
	int num;
	while(cin >> num && num != -1){
		a1[temp++] = num;
	}
	int count1 = temp;

	temp = 0;
	while(cin >> num && num != -1){
		a2[temp++] = num;
	} 
	int count2 = temp;

	int c1 = 0, c2 = 0, c3 = 0;
	//printf("%d %d\n", count1, count2);
	while(c1 <= count1 - 1 && c2 <= count2 - 1){
		// 此时数组1对应元素>数组2对应元素 
		if(a1[c1] > a2[c2]){
			a3[c3] = a1[c1];
			c3++;
			c1++;
		}
		// 此时数组1对应元素<=数组2对应元素
		else{
			a3[c3] = a2[c2];
			c3++;
			c2++;
		}
		/*
		if(a1[c1] == a2[c2]){
			a3[c3] = a1[c1];
			c3++;
			c1++;
			c2++;
		}
		// 此时数组1对应元素<数组2对应元素
		if(a1[c1] < a2[c2]){
			a3[c3] = a2[c2];
			c3++;
			c2++;
		}
		*/	
	}
	while(c1 <= count1 - 1){
		a3[c3] = a1[c1];
		c1++;
		c3++;
	}
	while(c2 <= count2 - 1){
		a3[c3] = a2[c2];
		c2++;
		c3++;
	}
	for(int i = 0; i < c3; i++){
		cout << a3[i] << ' ';
	}
	return 0;
} 
