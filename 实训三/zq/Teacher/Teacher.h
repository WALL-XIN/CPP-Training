//Teacher.h
#include <iostream>
#include <string>
using namespace std;

class BirthDate{
	private:
		int year;
		int month;
		int day;
	public:
		//静态属性的赋值
		BirthDate(int y,int m,int d):year(y),month(m),day(d){};
		//成员变量数据的显示
		void display();
		//改变生日日期
		void changeDate(int y,int m,int d);
};

class Teacher{
	protected:
		int num;
		string name;
		char sex;
		BirthDate birthday;
	public:
		//静态属性的赋值 
		Teacher(int n,string na,char s,int y,int m,int d):birthday(y,m,d),num(n),name(na),sex(s){};
		//成员变量数据的显示
		void display();
		//改变生日
		void changeDate(int y,int m,int d);
}; 
