// 一维数组14 查找某数出现的位置
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a[21];
	int m, n;
	// 多组数据如何读入
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		cin >> m;
		int ind = -1;
		for(int i = 0; i < n; i++){
			if(a[i] == m){
				ind = i;
				break;
			}
		}
		if(ind == -1) cout << "No" << endl;
		else cout << ind << endl;
	} 
	return 0;
} 
