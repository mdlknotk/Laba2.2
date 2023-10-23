//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба2.2 - условные операторы
//КТбо1-6, Кравченко Александр Андреевич
//TaskL
//23.10.2023
#include <iostream>

using namespace std;

int main()
{
	int n,mx=1,count1 = 0;
	cin >> n;
	while (mx * 2 <= n) {
		mx *= 2;
	}
	count1 += 1;
	n -= mx;
	mx = mx >> 1;
	while (n) {
		if (n - mx >= 0) {
			n -= mx;
			count1++;
		}
		mx = mx >> 1;
	}
	cout << count1;
}
