// 函数5 谁的余数大
#include <bits/stdc++.h>
using namespace std;
string f(string a, string b){
	if(a.size() > b.size()) return b;
	if(a.size() < b.size()) return a;
	return a < b ? a : b;
}
int main(void){
	string a, b;
	cin >> a >> b;
	cout << f(a, b) << endl;
	return 0;
} 
