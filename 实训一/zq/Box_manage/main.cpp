//main.cpp 
#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

int main(){
	//��������� 
	Box box1,box2,box3;
	//��̬���Եĸ�ֵ 
	box1.get_value();
	cout<<"volume of baxl is: ";
	//�����������ʾ
	box1.display();
	
	//��̬���Եĸ�ֵ 
	box2.get_value();
	cout<<"volume of bax2 is: ";
	//�����������ʾ
	box2.display();
	
	//��̬���Եĸ�ֵ 
	box3.get_value();
	cout<<"volume of bax3 is: ";
	//�����������ʾ
	box3.display();
	
	return 0;
}
