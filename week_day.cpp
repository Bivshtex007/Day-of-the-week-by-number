#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int day;
cout << "Введите номер дня" << endl;
cin >> day;
switch (day)
{
	case 1:
	cout << "Пн" << endl;;
	break;

	case 2:
	cout << "Вт" << endl;
	break;

	case 3:
	cout << "Ср" << endl;
	break;

	case 4:
	cout << "Чт" << endl;
	break;

	case 5:
	cout << "Пт" << endl;
	break;

	case 6:
	cout << "Сб" << endl;
	break;

	case 7:
	cout << "Вскр" << endl;
	break;

}

return 0;
}
