#include <iostream>
#include <string>
using namespace std;

class BirthDate{
	private:
		//年 
		int year;
		//月 
		int month;
		//日 
		int day;
	public:
		//静态属性的赋值
		BirthDate(int y,int m,int d):year(y),month(m),day(d){};
		//输出生日信息 
		void display();
		//修改生日 
		void changeDate(int y,int m,int d);
};

class Teacher{
	protected:
		//编号 
		int num;
		//姓名 
		string name;
		//性别
		char sex;
		//生日 
		BirthDate birthday;
	public:
		//静态属性的赋值
		Teacher(int n,string na,char s,int y,int m,int d):birthday(y,m,d),num(n),name(na),sex(s){};
		//输出教师信息 
		void display();
		//修改教师生日 
		void changeDate(int y,int m,int d);
}; 
