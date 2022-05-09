#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

//输出教师信息
void Teacher::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
	birthday.display();
};

//修改教师生日
void Teacher::changeDate(int y, int m, int d)
{
	birthday.changeDate(y, m, d);
};

//输出生日信息
void BirthDate::display()
{
	cout << "year:" << year << endl;
	cout << "month:" << month << endl;
	cout << "day:" << day << endl;
};

//修改生日
void BirthDate::changeDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
};
