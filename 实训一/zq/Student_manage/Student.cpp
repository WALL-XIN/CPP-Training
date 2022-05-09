//Student.cpp
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

//静态属性的赋值
void Student::set(){
	cout<<"请输入:";
	cin>>num>>name>>sex;
}
//静态属性的显示
void Student::display(){
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
}

