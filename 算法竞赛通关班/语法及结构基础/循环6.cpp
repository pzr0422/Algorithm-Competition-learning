// Ñ­»·6 TLE
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int ci, ti, n, t;
	cin >> n >> t;
	int min = 1000000001;
	for(int i = 0; i < n; i++){
		cin >> ci >> ti;
		if(ti > t) continue;
		if(ci < min) min = ci;
	}
	if(min == 1000000001) cout << "TLE" << endl;
	else cout << min << endl;
	return 0;
} 
