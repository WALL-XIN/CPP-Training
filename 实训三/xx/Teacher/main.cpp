#include <iostream>
#include "Teacher.h"
using namespace std;

int main() {
	//���ù��캯��������� 
	Teacher tea1(101,"����",'m',2021,9,15);
	//�����ʦ��Ϣ  
	tea1.display();
	//�޸Ľ�ʦ���� 
	tea1.changeDate(2222,2,22);
	//�����ķָ���
	cout<<"---------�����ķָ���----------"<<endl; 
	//�鿴�޸ĺ�Ľ�ʦ��Ϣ 
	tea1.display();
	
	return 0;
}
