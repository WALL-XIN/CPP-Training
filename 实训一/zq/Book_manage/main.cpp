//main.cpp
#include <iostream>
#include "Book.h"
using namespace std;

int main() { 
	Book b1;
	b1.setName("���μ�");	//�������� 
	b1.setPrice(100);	//���ü۸� 
	cout<<b1.get_Name()<<endl;	//��ȡ������������� 
	cout<<b1.get_Price(); 	//��ȡ�۸�����۸�
	return 0;
}
