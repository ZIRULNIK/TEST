// тест 5 задание.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int a = rand() % 10;
	int b = rand() % 10;
	int c = rand() % 10;
	int d = rand() % 10;

	cout << "пароль сгененирован: ****" << endl;
	cout << "пароль угадан:";
	for (int i = 0;i <= a;i++)
	{
		if (i == a)
		{
			cout << i;
		}
	}
	for (int i = 0;i <= b;i++)
	{
		if (i == b)
		{
			cout << "" << i;
		}
	}
	for (int i = 0;i <= c;i++)
	{
		if (i == c)
		{
			cout << "" << i;
		}
	}
				for (int i = 0;i <= d;i++)
				{
					if (i == d)
					{
						cout << "" << i;
					}

				}



			}

		