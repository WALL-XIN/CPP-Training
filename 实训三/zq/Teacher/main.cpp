//main.cpp
#include <iostream>
#include "Teacher.h"
using namespace std;

int main() {
	
	//ʹ�ù��춨����� 
	Teacher tea1(101,"����",'m',2021,9,15);
	//������� 
	tea1.display();
	//�޸����� 
	tea1.changeDate(2222,2,22);
	//�鿴�����Ƿ��޸ĳɹ� 
	tea1.display();
	
	return 0;
}
