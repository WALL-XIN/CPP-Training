#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

//�����ʦ��Ϣ
void Teacher::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
	birthday.display();
};

//�޸Ľ�ʦ����
void Teacher::changeDate(int y, int m, int d)
{
	birthday.changeDate(y, m, d);
};

//���������Ϣ
void BirthDate::display()
{
	cout << "year:" << year << endl;
	cout << "month:" << month << endl;
	cout << "day:" << day << endl;
};

//�޸�����
void BirthDate::changeDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
};
