//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба2.2 - условные операторы
//КТбо1-6, Кравченко Александр Андреевич
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
