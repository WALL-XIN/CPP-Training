//Book.cpp
#include <iostream>
#include "Book.h"
using namespace std;

//获取书名
string Book::get_Name(){
	return name;
};

//设置书名
void Book::setName(const string newName){
	name = newName;
};

//获取单价
float Book::get_Price(){
	return price;
};

//更改单价
void Book::setPrice(const float newPrice){
	price =newPrice;
};
