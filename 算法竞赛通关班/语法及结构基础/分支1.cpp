// 分支1 游客
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int weight;
	double price;
	cin >> weight;
	if(weight <= 30) {
		price = weight * 0.2;
		printf("%.2lf", price);
	}
	else if(weight <= 60) {
		price = (weight - 30) * 0.6 + 6;
		printf("%.2lf", price);
	}
	else cout << "NO";
	return 0;
} 
