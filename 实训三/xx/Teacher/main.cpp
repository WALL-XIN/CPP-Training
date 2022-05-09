#include <iostream>
#include "Teacher.h"
using namespace std;

int main() {
	//调用构造函数定义对象 
	Teacher tea1(101,"张三",'m',2021,9,15);
	//输出教师信息  
	tea1.display();
	//修改教师生日 
	tea1.changeDate(2222,2,22);
	//华丽的分割线
	cout<<"---------华丽的分割线----------"<<endl; 
	//查看修改后的教师信息 
	tea1.display();
	
	return 0;
}
