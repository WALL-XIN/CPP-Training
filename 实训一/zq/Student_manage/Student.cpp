//Student.cpp
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

//��̬���Եĸ�ֵ
void Student::set(){
	cout<<"������:";
	cin>>num>>name>>sex;
}
//��̬���Ե���ʾ
void Student::display(){
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
}

