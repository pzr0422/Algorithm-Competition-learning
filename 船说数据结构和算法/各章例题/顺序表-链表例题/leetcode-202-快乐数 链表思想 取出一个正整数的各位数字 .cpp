// leetcode-202-������ ����˼�� ȡ��һ���������ĸ�λ���� 
// ���x�ĸ�λ���ֵ�ƽ���� 
int getNext(int x){
	int y = 0;
	while(x){
		int ge = x % 10;
		y += ge * ge;
		x /= 10;
	}
	return y;
}

bool isHappy(int n){
	//˼ά�߼��ϵ�p,qָ�룬ʹ�ÿ���ָ�뷨ȷ���Ƿ�����ѭ�� 
	int p = n;
	int q = n;
	while(q != 1){
		p = getNext(p);//��1�� 
		q = getNext(getNext(q));//��2��
		if(p == q && q != 1) return false; 
	}
	return true;
} 
