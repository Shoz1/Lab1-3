#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	struct peoples {
		char sName[30];//�������
		char Name[30];//���
		char thName[30];//��������
		char work[30];//���������� ���������
		short Salary;//��������
		short WDay, WMonth, WYear;//����
	};

	short AvrgSalary = 10000;
	char s;
	int Day, Month, Year;
	cout << "������� ����������� ���� �/�/� ��������: 12.06.2019\n";
	cin >> Day >> s >> Month >> s >> Year;
	cout << "\n";

	short n;
	cout << "������� ���� �����:\n";
	cin >> n;
	cin.ignore();
	peoples people[10];

	for (int i = 0; i < n; i++) {

		cout << "������� ������� �������� "<< endl;
		cin.getline(people[i].sName, 30);
		cout << "������� ��� ��������\n";
		cin.getline(people[i].Name, 30);
		cout << "������� �������� ��������\n";
		cin >> (people[i].thName);
		cout << "������� ��������� ��������\n";
		cin >> (people[i].work);
		cout << "������� �������� ��������\n";
		cin >> (people[i].Salary);
		cout << "������� ��� �������� �������� �/�/� ��������: 12.06.1996\n";
		cin >> (people[i].WDay) >> s >> (people[i].WMonth) >> s >> (people[i].WYear);
		cin.ignore();

	}

	for (int i = 0; i < n; i++) 
	{
		if (people[i].Salary > AvrgSalary && people[i].WYear - Year < 30 || people[i].Salary > AvrgSalary && people[i].WYear - (Year - 1) < 30 && people[i].WMonth >= Month && people[i].WDay >= Day) 
		{
			cout << endl;
			cout << "������� ��������\n";
			cout << people[i].sName << endl;
			cout << "��� ��������\n" ;
			cout << people[i].Name << endl;
			cout << "�������� ��������\n";
			cout << (people[i].thName) << endl;
			cout << "��������� ��������\n";
			cout << (people[i].work) << endl;
			cout << "�������� ��������\n";
			cout << (people[i].Salary) << endl;
			cout << "��� �������� �������� �/�/� ��������: 12.06.1996\n";
			cout << (people[i].WDay) << s << (people[i].WMonth) << s << (people[i].WYear) << endl;
		}

	}
	return 0;
}