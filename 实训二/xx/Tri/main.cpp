#include <iostream>
#include "Tri.h"
using namespace std;

int main() {
	//��������� 
	Tri tri1;
	//����set����������a,b,c��ֵ  
	tri1.setABC();
	cout<<"����߳���ɵ����������Ϊ��"<<tri1.area()<<endl;
	
	//������Ķ�̬���� 
	Tri *tri2=new Tri(2,3,4);
	cout<<"ͨ�����캯����ɵ����������Ϊ��"<<tri2->area()<<endl;
	//�����ʹ�ú󣬵���"delete"����ɾ�������
	delete tri2;
	
	return 0;
}
