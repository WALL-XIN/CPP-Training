#include <iostream>
#include "Tri.h"
using namespace std;

int main() {
	//定义类对象 
	Tri tri1;
	//调用set方法，设置a,b,c的值  
	tri1.setABC();
	cout<<"输入边长组成的三角形面积为："<<tri1.area()<<endl;
	
	//定义类的动态对象 
	Tri *tri2=new Tri(2,3,4);
	cout<<"通过构造函数组成的三角形面积为："<<tri2->area()<<endl;
	//类对象使用后，调用"delete"方法删除类对象
	delete tri2;
	
	return 0;
}
