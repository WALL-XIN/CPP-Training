#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

//生成Book类对象数组
Book bookList[10];
int bookNum=0,i=0;
string Temp;

//添加新书信息功能函数
void insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	bookNum++;
};
//输出一本图书
void showBook(int i){
	cout<<setw(15)<<bookList[i].get_Name()<<setw(15)<<bookList[i].get_Price()<<endl;
};

int main() { 
	Book b1;
	b1.setName("西游记");
	b1.setPrice(100);
	cout<<b1.get_Name()<<endl;
	cout<<b1.get_Price()<<endl; 
	
	cout<<"请输入新书的书名:";
	cin>>Temp;
	cout<<"请输入新书的单价:";
	float pr;
	cin>>pr;
	insert(Temp,pr);
	showBook(bookNum-1);
	
	return 0;
}
