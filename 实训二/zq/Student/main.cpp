//main.cpp
#include <iostream>
#include "Student.h" 
using namespace std;

int main() {
	
	int i;
	//������������ 
	Student Stud[5]={
		Student(100,"���",80),
		Student(101,"С��",70),
		Student(106,"���",60),
		Student(107,"СС",100),
		Student(109,"С��",99),
	};
	
	//ѭ����������������� 
	for(i = 0;i < 4; i++){
		cout<<"��"<<(i+1)<<"ͬѧ����Ϣ��";
		Stud[i].display(); 
	}
	
	//ʹ�ö���ָ����� 
	Student *p=&Stud[0];
	for(i=0;i<5;i=i+2){
		(p+i)->display();
	}
	
	return 0;
}
