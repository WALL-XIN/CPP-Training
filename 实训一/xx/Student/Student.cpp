#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

//输入学生信息 
void Student::set(){
	cout<<"请输入学生的学号，名字，性别:";
	cin>>num>>name>>sex;
}

//输出学生信息 
void Student::display(){
	cout<<"学生学号为:"<<num<<endl;
	cout<<"学生名字为:"<<name<<endl;
	cout<<"学生性别为:"<<sex<<endl;
}

