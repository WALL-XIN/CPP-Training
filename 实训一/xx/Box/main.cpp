#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

int main(){
	//�ֱ���3������� 
	Box box1,box2,box3;
	//����get���볤��� 
	box1.get_value();
	cout<<"baxl�������: ";
	//������ 
	box1.display();
	
	//����get���볤��� 
	box2.get_value();
	cout<<"bax2�������: ";
	//������ 
	box2.display();
	
	//����get���볤��� 
	box3.get_value();
	cout<<"bax3�������: ";
	//������ 
	box3.display();
	
	return 0;
}
