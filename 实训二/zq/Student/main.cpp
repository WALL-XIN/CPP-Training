//main.cpp
#include <iostream>
#include "Student.h" 
using namespace std;

int main() {
	
	int i;
	//创建对象数组 
	Student Stud[5]={
		Student(100,"大白",80),
		Student(101,"小白",70),
		Student(106,"大大",60),
		Student(107,"小小",100),
		Student(109,"小明",99),
	};
	
	//循环遍历输出对象数组 
	for(i = 0;i < 4; i++){
		cout<<"第"<<(i+1)<<"同学的信息：";
		Stud[i].display(); 
	}
	
	//使用对象指针遍历 
	Student *p=&Stud[0];
	for(i=0;i<5;i=i+2){
		(p+i)->display();
	}
	
	return 0;
}
