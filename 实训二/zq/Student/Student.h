//Student.h
#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		int num;
		string name;
		float score;
	public:
		//实现在类的构造函数中定义形式参数初始化成员变量的值
		Student(int n,string na,float s):num(n),name(na),score(s){};
		//显示学生数据 
		void display();
};
