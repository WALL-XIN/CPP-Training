#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

//���볤��� 
void Box::get_value(){
	cout<<"�����볤����ĳ����: ";
	cin>>length>>width>>height;
}
//����� 
float Box::volume(){
	return length*width*height;
}
//����������ķ�������� 
void Box::display(){
	cout<<volume()<<endl;
}
