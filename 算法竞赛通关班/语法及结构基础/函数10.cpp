// 函数10 区间内的真素数
#include <bits/stdc++.h>
using namespace std;
int judge(int n){
	int flag = 1;
	for(int i = 2; i <= (int)sqrt(n); i++){
		if(n % i == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}
int reverse(int n){
	vector<int> num;
	while(n){
		int cur = n % 10;
		num.push_back(cur);
		n /= 10;
	}
	int len = num.size();
	int ans = 0;
	for(int i = 0; i < num.size(); i++){
		int k = num[i];
		ans += k * pow(10, len - 1);
		len--;
	}
	return ans;
}
int main(void){
	int M, N;
	cin >> M >> N;
	int order = 0;
	int flag = 0;
	for(int i = M; i <= N; i++){
		if(judge(i) && judge(reverse(i))){
			if(!order){
				cout << i;
				order = 1;
			}
			else{
				cout << ',' << i;
			}
			flag = 1;
		}
	}
	if(flag == 0) cout << "No" << endl;
	return 0;
} 
