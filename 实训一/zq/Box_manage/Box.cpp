//Box.cpp
#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

//静态属性的赋值 
void Box::get_value(){
	cout<<"please input lengh,width,height: ";
	cin>>length>>width>>height;
}
//体积的计算
float Box::volume(){
	return length*width*height;
}
//静态属性的显示
void Box::display(){
	cout<<volume()<<endl;
}
