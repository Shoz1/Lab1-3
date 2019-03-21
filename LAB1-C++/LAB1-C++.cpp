#include "pch.h"
#include <iostream>
using namespace std;

int main()
{ 
	setlocale(LC_ALL, "Rus");
	struct Shop {
		char Seller[30];
		char ProductName[50];
		short Price;
		short PDay, PMonth, PYear;
	};
	
	char s;
	int Day, Month, Year;
	cout << "Введите сегодняшнюю дату Д/М/Г например: 12.06.2019\n";
	cin >> Day >> s >> Month >> s >> Year;
	cout << "\n";

	short n;
	cout << "Введите коол товаров:\n";
	cin >> n;
	Shop product[10];

	cout << "Введите харрактеристики товаров.\n"<<endl;
	cin.ignore();

	for (int i = 0; i < n; i++) {

		cout << "Введите имя продавца №" << i <<endl;
		cin.getline(product[i].Seller, 30);
		cout << "Введите имя товара\n";
		cin.getline(product[i].ProductName, 50);
		cout << "Введите цену продажи\n";
		cin >> (product[i].Price);
		cout << "Введите год продажи Д/М/Г например: 12.06.2019\n";
		cin >> (product[i].PDay) >> s >> (product[i].PMonth) >> s >> (product[i].PYear);
		cin.ignore();

	}

	cout << "Проданы Менее года назад\n" << endl;
	for (int i = 0; i < n; i++) 
	{
		if (product[i].PYear == Year || product[i].PYear == Year - 1 && product[i].PMonth == Month && product[i].PDay >= Day || product[i].PYear == Year-1 && product[i].PMonth > Month ) {
			cout << endl;
			cout <<"Продавец: "<< product[i].Seller << endl;
			cout <<"Имя товара: "<< product[i].ProductName << endl;
			cout <<"Цена: "<< product[i].Price << endl ;
			cout <<"Дата продажи: " << (product[i].PDay) << s << (product[i].PMonth) << s << (product[i].PYear);
			

		}
				
	}
	
	return 0;
}