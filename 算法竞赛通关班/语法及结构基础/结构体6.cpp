// 结构体6 复制结构体
#include <bits/stdc++.h>
using namespace std;

struct change{
	int u, v;
	int arr[1005]; 
}change[1005];

int main(void){
	int arr[1005];
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 1; i <= m; i++){
		cin >> change[i].u >> change[i].v;
		arr[change[i].u - 1] = change[i].v;
		for(int j = 0; j < n; j++){
			change[i].arr[j] = arr[j];
		}
	}
	int index;
	for(int i = 0; i < m; i++){
		cin >> index;
		for(int j = 0; j < n; j++){
			cout << change[index].arr[j] << ' ';
		}
		cout << endl;
	}
} 
