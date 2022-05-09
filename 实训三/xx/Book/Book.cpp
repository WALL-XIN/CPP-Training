#include <iostream>
#include <string> 
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

//添加新书信息 
void BookList::insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	//书的数目+1 
	bookNum++;
};

//显示书的信息 
void BookList::showBook(int i){
	cout<<setw(15)<<bookList[i].getName();
	cout<<setw(15)<<bookList[i].getPrice()<<endl;
};

//搜索书 
int BookList::search(string Name){
	int i;
	for(i=0;i<bookNum;i++){
		if(bookList[i].getName()==Name){
			return i;
		}
	}	
	if(i==bookNum){
		return -1;
	}
};

//修改书名 
void BookList::update(int i,string newName){
	bookList[i].setName(newName);
};

//删除书 
void BookList::deleted(int i){
	for(int j=i;j<(bookNum-1);j++){
		bookList[j].setName(bookList[j+1].getName());
		bookList[j].setPrice(bookList[j+1].getPrice());
	}
	bookNum--;
};

//显示列名
void BookList::showBook_title(){
	cout<<setw(15)<<"书名"<<setw(15)<<"价格"<<endl;
};

//显示所有的书的信息 
void BookList::showAll(){
	showBook_title();
	for(int i=0;i<bookNum;i++){
		showBook(i);
		cout<<"共有图书"<<bookNum<<"书"<<endl; 
	}	
};




























