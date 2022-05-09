//Student.h
#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		int num;
		string name;
		char sex;
	public:
		//静态属性的赋值
		void set();
		//静态属性的显示
		void display();
};
