// ��ά����6-2 ���;����޸�
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tan[25][25] = {0}; // 0��ʾû�߹�����¼����
    int dire = 0; // ��ʾ��ǰ�ߵķ���: 0��, 1��, 2��, 3��
    int x = 1, y = 1;
    int n;
    cin >> n;

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

    // �������
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << tan[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
 
