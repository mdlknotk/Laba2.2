//���, �����, ��� ���
//���������������� � ������ ������ ����������
//����2.2 - �������� ���������
//����1-6, ��������� ��������� ���������
//TaskJ
//23.10.2023
#include <iostream>

using namespace std;

int main()
{
	int n,degree=1;
	cin >> n;
	while (n != degree && degree <= n) {
		degree *= 2;
	}
	if (degree == n) cout << "YES";
	else cout<<"NO";
}	
