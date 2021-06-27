#include <iostream>
using namespace std;
void function() {
	cout << "Введите пятизначное число" << endl;
	char a[4]; // определяет символьный тип данных a 
	cin >> a; // ввод символа
	cout << "1 - " << a[0] << endl; //вывод символа
	cout << "2 - " << a[1] << endl;
	cout << "3 - " << a[2] << endl;
	cout << "4 - " << a[3] << endl;
	cout << "5 - " << a[4] << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	function(); // вызов функций
	system("pause");
	return 0;
}
