//main.cpp
#include <iostream>
#include "Teacher.h"
using namespace std;

int main() {
	
	//使用构造定义对象 
	Teacher tea1(101,"张三",'m',2021,9,15);
	//输入对象 
	tea1.display();
	//修改生日 
	tea1.changeDate(2222,2,22);
	//查看对象是否修改成功 
	tea1.display();
	
	return 0;
}
