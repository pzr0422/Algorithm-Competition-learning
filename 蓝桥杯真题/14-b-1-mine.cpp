// my version
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
	int d = date % 10000;
	if(st[d]) return false;
	st[d] = true;
	int dim[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month = d / 100;
	int day = d % 100;
	if(month == 0 || month > 12) return false;
	if(day == 0) return false;
	if(day > dim[month]) return false;
	return true;
}

void dfs(int pos, int len, int date){
	if(pos == 100) return ;
	if(len == 8){
		if(check(date)) ans++;
		return;
	}
	if(len < 4){
		if((len == 0 && a[pos] == 2) || (len == 1 && a[pos] == 0) || (len == 2 && a[pos] == 2) || (len == 3 && a[pos] == 3)){
			// ѡ��
			dfs(pos + 1, len + 1, date * 10 + a[pos]);
		}
		else{
			dfs(pos + 1, len, date);
		}
	}
	else{
		dfs(pos + 1, len + 1, date * 10 + a[pos]);
		dfs(pos + 1, len, date);
	}
}
int main(void){
	dfs(0, 0, 0);
	cout << ans << endl;
	return 0;
}
