#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;

//�õ����� 
string Book::getName(){
	return name;
};

//�������� 
void Book::setName(const string newName){
	name = newName;
};

//�õ��۸� 
float Book::getPrice(){
	return price;
};

//���ü۸� 
void Book::setPrice(const float newPrice){
	price =newPrice;
};
