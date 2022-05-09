#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

//定义对象数组 
Book bookList[10];
int bookNum=0,i=0;

//添加新书信息 
void insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	//书的数目+1 
	bookNum++;
};

//显示书的信息 
void showBook(int i){
	cout<<setw(15)<<bookList[i].getName()<<setw(15)<<bookList[i].getPrice()<<endl;
};

int main() {
	string Temp;
	//定义类对象 
	Book book;
	//调用set方法，设置书名与价格 
	book.setName("红楼梦");
	book.setPrice(30);
	//调用get方法，输出 书名与价格 
	cout<<book.getName()<<endl;
	cout<<book.getPrice()<<endl; 
	
	cout<<"请输入新书的书名:";
	cin>>Temp;
	cout<<"请输入新书的单价:";
	float pr;
	cin>>pr;
	//将新书信息添加到对象数组中 
	insert(Temp,pr);
	//显示新书的信息 
	showBook(bookNum-1);
	 
	return 0;
}
