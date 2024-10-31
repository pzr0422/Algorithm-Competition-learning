// º¯Êı8 ËØÊı¶Ô
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
	int n;
	cin >> n;
	int flag = 0;
	for(int i = 2; i + 2 <= n; i++){
		if(judge(i) && judge(i + 2)){
			cout << i << ' ' << i + 2 << endl;
			flag = 1;
		}
	}
	if(flag == 0) cout << "empty" << endl;
	return 0;
} 
