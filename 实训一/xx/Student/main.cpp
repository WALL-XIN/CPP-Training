#include <iostream>
#include <string>
#include "Student.h"

int main(){
	//定义类对象 
	Student stu;
	//调用set方法输入学生信息 
	stu.set();
	//输出学生信息 
	stu.display();
	return 0;
}
