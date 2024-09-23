// 循环嵌套3 第n个质数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	//自己的方法
	int n, count = 0;
	cin >> n;
	int num = 2;
	while(count < n){
		int flag = 1;
		for(int i = 2; i < num; i++){
			if(num % i == 0) flag = 0;
		}
		if(flag == 1){
			count++;
			if(count == n){
				cout << num;
			}
		}
		num++;
	} 
	return 0;
} 
