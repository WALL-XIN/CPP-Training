#include <iostream>
#include "Tri.h"
using namespace std;

int main() {
	//�������� 
	Tri tri1;
	tri1.setABC(); 
	cout<<"����߳���ɵ����������Ϊ��"<<tri1.area()<<endl;
	
	//������Ķ�̬���� 
	Tri *tri2=new Tri(2,3,4);
	cout<<"ͨ�����캯����ɵ����������Ϊ��"<<tri2->area()<<endl;
	delete tri2;
	
	return 0;
}
