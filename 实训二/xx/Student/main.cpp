#include <iostream>
#include "Student.h" 
using namespace std;

int main() {
	
	int i;
	//定义对象数组，并调用构造函数 
	Student Stud[5]={
		Student(101,"张三",90),
		Student(102,"李四",91),
		Student(103,"小明",92),
		Student(104,"小刚",93),
		Student(105,"康康",94),
	};
	
	//利用循环，遍历输出每个对象的学生信息 
	for(i=0;i<4;i++){
		cout<<"第"<<(i+1)<<"同学的信息";
		Stud[i].display(); 
	}
	
	//创建对象指针 
	Student *p=&Stud[0];
	
	//对象指针调用display方法 
	for(i=0;i<5;i=i+2){
		(p+i)->display();
	}
	
	return 0;
}
