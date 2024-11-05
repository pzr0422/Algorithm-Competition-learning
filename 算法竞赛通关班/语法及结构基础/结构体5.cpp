// 结构体5 班级平均分
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
struct Class{
	int grade[35];
	int avg;
}Class[maxn];

int main(void){
	int n;
	cin >> n;
	int sum2 = 0;
	for(int i = 0; i < n; i++){
		int m, sum = 0;
		cin >> m;
		for(int j = 0; j < m; j++){
			cin >> Class[i].grade[j];
			sum += Class[i].grade[j];
		} 
		Class[i].avg = sum / m;
		sum2 += Class[i].avg;
	}
	int avg2 = sum2 / n;
	for(int i = 0; i < n; i++){
		if(Class[i].avg < avg2) cout << i + 1 << ' ';
	}
	return 0;
} 
