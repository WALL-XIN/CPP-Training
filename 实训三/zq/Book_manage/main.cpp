//main.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

int main() {
	
	BookList b1;
	float pr;
	string Temp;
	
	cout<<"请输入新书的书名:";
	cin>>Temp;
	cout<<"请输入新书的单价:";
	cin>>pr;
	b1.insert(Temp,pr);		//添加一本新书 
	b1.showBook(b1.bookNum-1);	//输出新添加书的信息 
	
	cout<<"请输入要查找图书的书名:";
	cin>>Temp;
	int x=b1.search(Temp);
	if(x>=0){
		b1.showBook(x);
	}else{
		cout<<"未找到该书！"<<endl; 
	}
	
	cout<<"请输入要修改图书的书名:";
	cin>>Temp;
	int y=b1.search(Temp);
	if(y>=0){
		cout<<"请输入该图书新的书名:";
		cin>>Temp;
		b1.update(y,Temp);	//更新书名 
		b1.showBook(y); 	//输出修改后书的信息 
	} else{
		cout<<"未找到该书！"<<endl;
	}
	
	////输出所有图书的书名等信息 
	b1.showAll();
	
	cout<<"请输入要删除图书的书名：";
	cin>>Temp;
	int z=b1.search(Temp);	//查找书名 
	if(z>=0){
		b1.deleted(z);
		cout<<"共有图书本数："<<b1.bookNum<<endl;
	} else{
		cout<<"未找到该书！"<<endl;
	}
	 
	return 0;
}
