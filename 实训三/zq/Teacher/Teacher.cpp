//Teacher.cpp
#include <iostream>
#include <string>
#include "Teacher.h"
using namespace std;

//��Ա�������ݵ���ʾ
void Teacher::display(){
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	birthday.display();
};

//�ı�����
void Teacher::changeDate(int y,int m,int d){
	birthday.changeDate(y,m,d);
};

//��Ա�������ݵ���ʾ
 void BirthDate::display(){
 	cout<<"year:"<<year<<endl;
	cout<<"month:"<<month<<endl;
	cout<<"day:"<<day<<endl;
 };
 
 //�ı���������
 void BirthDate::changeDate(int y,int m,int d){
 	year=y;
 	month=m;
 	day=d;
 };

