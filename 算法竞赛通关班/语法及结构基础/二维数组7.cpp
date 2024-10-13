// 二维数组7 疫情生病怎么办？
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int arr[105][105] = {0};
	int flag[105][105] = {0};
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> arr[i][j];
			flag[i][j] = arr[i][j];
		}
	}
	int count = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(!arr[i][j]){
				flag[i - 1][j] = 0;
				flag[i + 1][j] = 0;
				flag[i][j - 1] = 0;
				flag[i][j + 1] = 0;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(flag[i][j]) count++;
		}
	}
	cout << count << endl;
	return 0;
} 
