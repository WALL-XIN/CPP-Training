#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

//����ѧ����Ϣ 
void Student::set(){
	cout<<"������ѧ����ѧ�ţ����֣��Ա�:";
	cin>>num>>name>>sex;
}

//���ѧ����Ϣ 
void Student::display(){
	cout<<"ѧ��ѧ��Ϊ:"<<num<<endl;
	cout<<"ѧ������Ϊ:"<<name<<endl;
	cout<<"ѧ���Ա�Ϊ:"<<sex<<endl;
}

