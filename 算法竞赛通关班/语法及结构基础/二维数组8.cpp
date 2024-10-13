// ��ά����8 ��������
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tan[2005][2005] = {0}; // 0��ʾû�߹�����¼����
    int dire = 0; // ��ʾ��ǰ�ߵķ���: 0��, 1��, 2��, 3��
    int x = 1, y = 1;
    int n;
    int pos_x, pos_y; 
    cin >> n >> pos_x >> pos_y;

    for (int i = 1; i <= n * n; i++) {
        tan[x][y] = i;  // ���뵱ǰ����

        // ���·���
        switch (dire % 4) {
            case 0: y++; break; // ��
            case 1: x++; break; // ��
            case 2: y--; break; // ��
            case 3: x--; break; // ��
        }

        // ���Խ���ǰλ���Ѿ������������˲�ת��
        if (x < 1 || x > n || y < 1 || y > n || tan[x][y] != 0) {
            // ����
            switch (dire % 4) {
                case 0: y--; break; // ������
                case 1: x--; break; // ������
                case 2: y++; break; // ������
                case 3: x++; break; // ������
            }

            // �ı䷽��
            dire++;

            // �����·����ƶ�
            switch (dire % 4) {
                case 0: y++; break; // ��
                case 1: x++; break; // ��
                case 2: y--; break; // ��
                case 3: x--; break; // ��
            }
        }
    }

    // ���i��j�е���
	cout << tan[pos_x][pos_y] << endl; 
    return 0;
}
 
