#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<locale.h>

using namespace std;

bool chislo(int x)
{
	if (x >= 0)
	{
		return 1;
	}
	else return 0;
}
int vibor(int z,int c, char y)
{
	if (y == '/')return z / c;
	else if (y == '*') return z * c;
	else if (y == '+') return z + c;
	else if (y == '-') return z - c;
	else return 0;
}
bool prosto(int a)
{
	if (a%2 == 1 && a%3!=0 && a%10!=0 && a%9!=0)
	{
		return 1;
	}
	else return 0;
}

int main()
{
	setlocale(LC_ALL, "");
	int x, z = 0, c = 0, flag = 0, task, a = 0;
	char y;

	do
	{
		system("cls");

		cout << "������� ����� �������:";
		cin >> task;

		switch (task)
		{
		case 1:
			cout << "������� ����� ��� ��������:";
			cin >> x;	

			cout << chislo(x) << endl; //������ �������
			break;
		case 2:
			cout << "������� ��� �����:";
			cin >> z;
			cin >> c;

			cout << "������� /(�������), *(���������), +(��������) ��� -(���������)";
			cin >> y;

			cout << vibor(z,c,y) << endl; //������ �������
		case 3:
			cout << "������� ����� ��� ��������:";
			cin >> a;
			cout <<prosto(a) << endl;
		}

		cout << "������ ����������?1/0";
		cin >> flag;

	} while (flag == 1);
}