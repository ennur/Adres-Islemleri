#include <iostream>
#include "Top.h"
using namespace std;

int main()
{

	int value;
	int secim;

	cout << "Dizi uzunlugu giriniz : " << endl;
	cin >> value;
	Top**ptoplar = new Top*[value];

	for (int i = 0; i < value; i++)
	{
		ptoplar[i] = new Top();
	}
	cout << "Dizi Basari ile olusturuldu." << endl;
	system("pause");
	while (true)
	{
		system("cls");
		cout << "1 - " << "Diziyi ters cevir." << endl;
		cout << "2 - " << "Diziyi yazdir." << endl;
		cout << "3 - " << "Cikis" << endl;
		cin >> secim;


		if (secim == 1)
		{

			for (int i = 0; i < value / 2; i++)
			{
				Top *temp = ptoplar[i];
				ptoplar[i] = ptoplar[value - 1 - i];
				ptoplar[value - 1 - i] = temp;

			}

			cout << "Dizi Basari ile ters cevrildi." << endl;


		}

		if (secim == 2)
		{

			for (int i = 0; i < value; i++)
			{
				ptoplar[i]->topCikar();

			}
		}

		if (secim == 3)
		{
			return 0;
		}
		system("pause");
	}



	for (int i = 0; i < value; i++)
	{
		delete[] ptoplar[i];
	}


	return 0;
}






















