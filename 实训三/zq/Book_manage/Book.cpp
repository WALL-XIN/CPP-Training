//Book.cpp
#include <iostream>
#include <iomanip>
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

//添加新书信息功能函数
void BookList::insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	bookNum++;
};

//输出一本图书
void BookList::showBook(int i){
	cout<<setw(15)<<bookList[i].get_Name();
	cout<<setw(15)<<bookList[i].get_Price()<<endl;
};

//查找图书信息功能函数
int BookList::search(string Name){
	int i;
	for(i=0;i<bookNum;i++){
		if(bookList[i].get_Name()==Name){
			return i;
		}
	}	
	if(i==bookNum){
		return -1;
	}
};

//修改图书信息功能函数
void BookList::update(int i,string newName){
	bookList[i].setName(newName);
};

//删除图书信息功能函数
void BookList::deleted(int i){
	for(int j=i;j<(bookNum-1);j++){
		bookList[j].setName(bookList[j+1].get_Name());
		bookList[j].setPrice(bookList[j+1].get_Price());
	}
	bookNum--;
};

//输出列名
void BookList::showBook_title(){
	cout<<setw(15)<<"书名"<<setw(15)<<"价格"<<endl;
};

//输出所有图书的书名等信息
void BookList::showAll(){
	showBook_title();
	for(int i=0;i<bookNum;i++){
		showBook(i);
		cout<<"共有图书"<<bookNum<<"书"<<endl; 
	}	
};
