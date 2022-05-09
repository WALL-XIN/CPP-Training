//Teacher.cpp
#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

//成员变量数据的显示
void Teacher::display(){
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	birthday.display();
};

//改变生日
void Teacher::changeDate(int y,int m,int d){
	birthday.changeDate(y,m,d);
};

//成员变量数据的显示
 void BirthDate::display(){
 	cout<<"year:"<<year<<endl;
	cout<<"month:"<<month<<endl;
	cout<<"day:"<<day<<endl;
 };
 
 //改变生日日期
 void BirthDate::changeDate(int y,int m,int d){
 	year=y;
 	month=m;
 	day=d;
 };

