//Box.cpp
#include <iostream>
#include <string>
#include "Box.h"
using namespace std;

//��̬���Եĸ�ֵ 
void Box::get_value(){
	cout<<"please input lengh,width,height: ";
	cin>>length>>width>>height;
}
//����ļ���
float Box::volume(){
	return length*width*height;
}
//��̬���Ե���ʾ
void Box::display(){
	cout<<volume()<<endl;
}
