// ��֧7 С˧��绰
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int base, above, total;
	cin >> base >> above >> total;
	int r1 = (total - base) / above + 3;
	int r2 = (total / base * 3) + (total % base) / above;
	if(total < base) cout << 0;
	else if(r1 < r2) cout << r2
	else cout << r1;
	return 0;
}
/*
int main(void){
	int base, above, total;
	cin >> base >> above >> total;
	if(total < base) cout << 0;
	//���Ŵ��ʡǮ 
	if(base / 3 >= above){
		cout << (total - base) / above + 3;
	}
	//һֱ����base������3���Ӵ�绰 
	else{
		cout << (total / base) * 3 + (total % base) / above;
	}
	return 0;
} 
*/
