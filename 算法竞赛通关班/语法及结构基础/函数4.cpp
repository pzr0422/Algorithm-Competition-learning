// 函数4 验证哥德巴赫猜想
#include <bits/stdc++.h>
using namespace std;
int judge(int n){
	int flag = 1;
	for(int i = 2; i <=(int)sqrt(n); i++){
		if(n % i == 0) flag = 0;
	}
	return flag;
}
int main(void){
	int N;
	cin >> N;
	for(int i = 2; i <= N / 2; i++){
		if(judge(i) && judge(N - i)){
			cout << N << '=' << i << '+' << N - i << endl;
			break; 
		}
	}
	return 0;
} 
