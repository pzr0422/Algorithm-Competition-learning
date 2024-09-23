// Ñ­»·8 ºï×Ó³ÔÌÒ
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int day = 0;
	cin >> day;
	int sum = 1;
	for(int i = 1; i < day; i++){
		sum = (sum + 1) * 2;
	}
	cout << sum << endl;
	return 0;
}
