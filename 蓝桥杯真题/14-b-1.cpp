// 14-b-1
#include <bits/stdc++.h>
using namespace std;
int ans;
int a[100] = {
        5, 6, 8, 6, 9, 1, 6, 1, 2, 4, 9, 1, 9, 8, 2, 3, 6, 4, 7, 7,
        5, 9, 5, 0, 3, 8, 7, 5, 8, 1, 5, 8, 6, 1, 8, 3, 0, 3, 7, 9,
        2, 7, 0, 5, 8, 8, 5, 7, 0, 9, 9, 1, 9, 4, 4, 6, 8, 6, 3, 3,
        8, 5, 1, 6, 3, 4, 6, 7, 0, 7, 8, 2, 7, 6, 8, 9, 5, 6, 5, 6,
        1, 4, 0, 1, 0, 0, 9, 4, 8, 0, 9, 1, 2, 8, 5, 0, 2, 5, 3, 3
    };
bool st[10000];

bool check(int date){
	int d = date % 10000; // 取后四位
	if(st[d]) return false;
	st[d] = true;
	int month = d / 100;
	int day = d % 100;
	if(month > 12 || month == 0) return false;
	if(day > 31 || day == 0) return false;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		if(day > 31 || day == 0) return false;
	} 
	if(month == 4 || month == 6 || month == 9 || month == 11){
		if(day > 30 || day == 0) return false;
	} 
	if(month == 2){
		if(day > 28 || day == 0) return false;
	}
	return true;
}

void dfs(int a_pos, int len, int date){
	// 边界条件
	if(a_pos == 100) return ;
	if(len == 8) {
		if(check(date)) ans++;
		return;
	} 
	// 保证前4个数字是2023 
	if((len == 0 && a[a_pos] == 2) || 
	(len == 1 && a[a_pos] == 0) || 
	(len == 2 && a[a_pos] == 2) || 
	(len == 3 && a[a_pos] == 3)){
		dfs(a_pos + 1, len + 1, date * 10 + a[a_pos]);
	}
	
	dfs(a_pos + 1, len, date); 
}
int main(void){
	//for(int i = 0; i < 100; i++) scanf("%d", &a[i]);
	


	dfs(0, 0, 0);
	cout << ans << endl;
	return 0;
}
