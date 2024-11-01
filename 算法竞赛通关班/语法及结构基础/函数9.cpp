// 函数9 质数的和与积
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
int main(void){
	int sum;
	cin >> sum;
	for(int i = sum / 2; i >= 2; i--){
		if(judge(i) && judge(sum - i)){
			cout << i * (sum - i) << endl;
			break;
		}
	}
	return 0;
} 
