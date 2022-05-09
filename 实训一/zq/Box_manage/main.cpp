//main.cpp 
#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

int main(){
	//定义类对象 
	Box box1,box2,box3;
	//静态属性的赋值 
	box1.get_value();
	cout<<"volume of baxl is: ";
	//计算体积并显示
	box1.display();
	
	//静态属性的赋值 
	box2.get_value();
	cout<<"volume of bax2 is: ";
	//计算体积并显示
	box2.display();
	
	//静态属性的赋值 
	box3.get_value();
	cout<<"volume of bax3 is: ";
	//计算体积并显示
	box3.display();
	
	return 0;
}
