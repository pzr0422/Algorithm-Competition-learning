//˳��6 ŷ����þ���
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	double dis = sqrt(pow(c - a, 2) + pow(d - b, 2));
	printf("%.2lf", dis);
	return 0;
} 
