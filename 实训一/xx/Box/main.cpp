#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

int main(){
	//分别定义3个类对象 
	Box box1,box2,box3;
	//调用get输入长宽高 
	box1.get_value();
	cout<<"baxl的面积是: ";
	//输出体积 
	box1.display();
	
	//调用get输入长宽高 
	box2.get_value();
	cout<<"bax2的面积是: ";
	//输出体积 
	box2.display();
	
	//调用get输入长宽高 
	box3.get_value();
	cout<<"bax3的面积是: ";
	//输出体积 
	box3.display();
	
	return 0;
}
