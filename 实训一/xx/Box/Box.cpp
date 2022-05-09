#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

//输入长宽高 
void Box::get_value(){
	cout<<"请输入长方体的长宽高: ";
	cin>>length>>width>>height;
}
//求体积 
float Box::volume(){
	return length*width*height;
}
//调用求体积的方法并输出 
void Box::display(){
	cout<<volume()<<endl;
}
