//Book.cpp
#include <iostream>
#include "Book.h"
using namespace std;

//��ȡ����
string Book::get_Name(){
	return name;
};

//��������
void Book::setName(const string newName){
	name = newName;
};

//��ȡ����
float Book::get_Price(){
	return price;
};

//���ĵ���
void Book::setPrice(const float newPrice){
	price =newPrice;
};
