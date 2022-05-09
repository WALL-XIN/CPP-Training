#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		//学号 
		int num;
		//姓名 
		string name;
		//成绩 
		float score;
	public:
		//在类的构造函数中定义形式参数初始化成员变量的值;
		Student(int n,string na,float s):num(n),name(na),score(s){};
		//输出学生信息 
		void display();
};
