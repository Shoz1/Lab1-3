#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	struct peoples {
		char sName[30];//Фамилия
		char Name[30];//Имя
		char thName[30];//Отчество
		char work[30];//Занимаемая должность
		short Salary;//Зарплата
		short WDay, WMonth, WYear;//Дата
	};

	short AvrgSalary = 10000;
	char s;
	int Day, Month, Year;
	cout << "Введите сегодняшнюю дату Д/М/Г например: 12.06.2019\n";
	cin >> Day >> s >> Month >> s >> Year;
	cout << "\n";

	short n;
	cout << "Введите коол людей:\n";
	cin >> n;
	cin.ignore();
	peoples people[10];

	for (int i = 0; i < n; i++) {

		cout << "Введите Фамилию Рабочего "<< endl;
		cin.getline(people[i].sName, 30);
		cout << "Введите имя Рабочего\n";
		cin.getline(people[i].Name, 30);
		cout << "Введите отчество Рабочего\n";
		cin >> (people[i].thName);
		cout << "Введите должность Рабочего\n";
		cin >> (people[i].work);
		cout << "Введите зарплату Рабочего\n";
		cin >> (people[i].Salary);
		cout << "Введите год рождения Рабочего Д/М/Г например: 12.06.1996\n";
		cin >> (people[i].WDay) >> s >> (people[i].WMonth) >> s >> (people[i].WYear);
		cin.ignore();

	}

	for (int i = 0; i < n; i++) 
	{
		if (people[i].Salary > AvrgSalary && people[i].WYear - Year < 30 || people[i].Salary > AvrgSalary && people[i].WYear - (Year - 1) < 30 && people[i].WMonth >= Month && people[i].WDay >= Day) 
		{
			cout << endl;
			cout << "Фамилия Рабочего\n";
			cout << people[i].sName << endl;
			cout << "Имя Рабочего\n" ;
			cout << people[i].Name << endl;
			cout << "Отчество Рабочего\n";
			cout << (people[i].thName) << endl;
			cout << "Должность Рабочего\n";
			cout << (people[i].work) << endl;
			cout << "Зарплата Рабочего\n";
			cout << (people[i].Salary) << endl;
			cout << "год рождения Рабочего Д/М/Г например: 12.06.1996\n";
			cout << (people[i].WDay) << s << (people[i].WMonth) << s << (people[i].WYear) << endl;
		}

	}
	return 0;
}