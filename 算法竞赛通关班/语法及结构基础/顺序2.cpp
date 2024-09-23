//顺序结构2 长方形的表面积和体积
#include <bits/stdc++.h>

int main(void){
	int l, w, h;
	scanf("%d%d%d", &l, &w, &h);
	printf("%d %d", 2 * (l*w + l*h + w*h), l*w*h);
	return 0;
} 
