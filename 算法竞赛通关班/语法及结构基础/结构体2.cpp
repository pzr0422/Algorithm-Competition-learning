// 结构体2 旗鼓相当的对手
#include <bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int yuwen;
	int shuxue;
	int yingyu;
}student;


int main(void){
	struct student s[1005];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i].name >> s[i].yuwen >> s[i].shuxue >> s[i].yingyu;
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			int flag = 0;  // 初始化认为当前这组不是旗鼓相当的对手
			int cha = 0;
			cha += abs((s[i].shuxue + s[i].yingyu + s[i].yuwen) - (s[j].shuxue + s[j].yingyu + s[j].yuwen));
			if(cha <= 10 && abs(s[i].shuxue - s[j].shuxue) <= 5 && abs(s[i].yingyu - s[j].yingyu) <= 5 && abs(s[i].yuwen - s[j].yuwen) <= 5){
				flag = 1;
			}
			if(flag) cout << s[i].name << ' ' << s[j].name << endl;
		}
	}
	
	return 0;
} 
