#include <iostream>
#include "Student.h" 
using namespace std;

int main() {
	
	int i;
	//����������飬�����ù��캯�� 
	Student Stud[5]={
		Student(101,"����",90),
		Student(102,"����",91),
		Student(103,"С��",92),
		Student(104,"С��",93),
		Student(105,"����",94),
	};
	
	//����ѭ�����������ÿ�������ѧ����Ϣ 
	for(i=0;i<4;i++){
		cout<<"��"<<(i+1)<<"ͬѧ����Ϣ";
		Stud[i].display(); 
	}
	
	//��������ָ�� 
	Student *p=&Stud[0];
	
	//����ָ�����display���� 
	for(i=0;i<5;i=i+2){
		(p+i)->display();
	}
	
	return 0;
}
