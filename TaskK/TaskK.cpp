//���, �����, ��� ���
//���������������� � ������ ������ ����������
//����2.2 - �������� ���������
//����1-6, ��������� ��������� ���������
//TaskK
//23.10.2023
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	while (a != b) {
		if (a / 2 >= b && a % 2 == 0) {
			a /= 2;	
			cout << ":2"<<endl;
		}
		else {
			a--;
			cout << "-1" << endl;
		}
	}
}
