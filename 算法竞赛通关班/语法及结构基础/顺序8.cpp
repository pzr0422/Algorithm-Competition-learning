//À≥–Ú8 «–±»—©∑Úæ‡¿Î
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int dis1 = abs(c - a);
	int dis2 = abs(d - b);
	if(dis1 < dis2) cout << dis2;
	else cout << dis1;
	return 0;
} 
