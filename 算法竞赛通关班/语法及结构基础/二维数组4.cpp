// 二维数组4 幻方
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int arr[502][502] = {0};
	int n;
	cin >> n;
	arr[1][(n+1)/2] = 1; // 第一行的中间放1
	// 后续放置2~n*n 
	int pos1 = 1; // 记录上一个数字所摆放的行数 
	int pos2 = (n + 1) / 2; // 记录上一个数字所摆放的列数 
	for(int num = 2; num <= n * n; num++){
		if(pos1 == 1 && pos2 != n){
			pos1 = n;
			pos2++;
		}
		if(pos2 == n && pos1 != 1){
			pos1++;
			pos2 = 1;
		}
		if(pos1 == 1 && pos2 == n){
			pos1++;
		}
		if(pos1 != 1 && pos2 != n){
			if(!arr[pos1 - 1][pos2 + 1]){
				pos1--;
				pos2++;
			}
			else{
				pos1++;
			}
		}
		arr[pos1][pos2] = num;
	} 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
} 
