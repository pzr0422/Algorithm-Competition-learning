// Ñ­»·5 Ñ¡°à³¤
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n, a = 0, b = 0, c = 0;
	cin >> n;
	while(n != -1){
		if(n == 1) a++;
		if(n == 2) b++;
		if(n == 3) c++;
		cin >> n;
	}
	cout << "A=" << a << endl;
	cout << "B=" << b << endl;
	cout << "C=" << c << endl;
	cout << "Tot=" << a + b + c << endl;
	double temp = (a + b + c) / 2.0;
	if(a > temp) cout << "A-yes" << endl;
	else if(b > temp) cout << "B-yes" << endl;
	else if(c > temp) cout << "C-yes" << endl;
	else cout << "all-NO" << endl;
	
	return 0;
} 
