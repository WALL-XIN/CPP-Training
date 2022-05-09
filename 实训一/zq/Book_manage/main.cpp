//main.cpp
#include <iostream>
#include "Book.h"
using namespace std;

int main() { 
	Book b1;
	b1.setName("西游记");	//设置书名 
	b1.setPrice(100);	//设置价格 
	cout<<b1.get_Name()<<endl;	//获取书名并输出书名 
	cout<<b1.get_Price(); 	//获取价格并输出价格
	return 0;
}
