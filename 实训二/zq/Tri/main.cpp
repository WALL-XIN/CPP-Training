#include <iostream>
#include "Tri.h"
using namespace std;

int main() {
	//创建对象 
	Tri tri1;
	tri1.setABC(); 
	cout<<"输入边长组成的三角形面积为："<<tri1.area()<<endl;
	
	//定义类的动态对象 
	Tri *tri2=new Tri(2,3,4);
	cout<<"通过构造函数组成的三角形面积为："<<tri2->area()<<endl;
	delete tri2;
	
	return 0;
}
