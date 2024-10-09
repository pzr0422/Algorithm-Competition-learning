// 二维数组3 炸弹
#include <bits/stdc++.h>
using namespace std;
int T;
char loc[1010][1010];
int a[1010][1010]; // 0/1表示有无墙
int row[1010]; // 表示对应行一共有多少堵墙 
int col[1010]; // 表示对应列一共有多少堵墙
int sum; // 记录一共有多少面墙
int n, m;
int main(void){
	cin >> T;
	while(T--){
		cin >> n >> m;
		sum = 0; 
		//for(int i = 0; i < n; i++) row[i] = 0;
		fill(row + 1, row + 1 + n, 0);
		//for(int j = 0; j < m; j++) col[i] = 0;
		fill(col + 1, col + 1 + m, 0);
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> loc[i][j];
				a[i][j] = (loc[i][j] == '*');
				row[i]+=a[i][j];
				col[j]+=a[i][j];
				sum += a[i][j];
			}
		}
		
		bool flag = false;
		int x, y;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(!flag  && row[i] + col[j] - a[i][j] == sum){
					flag = true;
					x = i;
					y = j;
				}
			}
		}
		if(flag){
			cout << "YES" << endl;
			cout << x << ' '<< y << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	
	return 0;
} 
