// 14-b-2
#include <bits/stdc++.h>
using namespace std;
double ans = 11625907.5798;
double wucha = 1e-4;
double len = 23333333;

int main(void){
	for(int len_0 = 1; len_0 < len / 2; len_0++){
		int len_1 = len - len_0;
		double t = -(len_0 * (len_0 / len) * log(len_0/len) / log(2)) - (len_1 * (len_1 / len) * log(len_1/len) / log(2));
		if(abs(t - ans) < wucha) cout << len_0 << endl;
	}
	return 0;
}
