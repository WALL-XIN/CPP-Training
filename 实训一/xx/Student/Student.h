#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		//学号 
		int num;
		//姓名 
		string name;
		//性别 
		char sex;
	public:
		//输入学生信息 
		void set();
		//输出学生信息 
		void display();
		
};
