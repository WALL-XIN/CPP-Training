#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;

//得到书名 
string Book::getName(){
	return name;
};

//设置书名 
void Book::setName(const string newName){
	name = newName;
};

//得到价格 
float Book::getPrice(){
	return price;
};

//设置价格 
void Book::setPrice(const float newPrice){
	price =newPrice;
};
