#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

int main() {
	
	//定义类对象 
	BookList b1;
	float pr;
	string Temp;
	
	cout<<"请输入新书的书名:";
	cin>>Temp;
	cout<<"请输入新书的单价:";
	cin>>pr;
	//添加新书
	b1.insert(Temp,pr);
	//显示书的信息 
	b1.showBook(b1.bookNum-1);
	
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
	//搜索书 
	int y=b1.search(Temp);
	if(y>=0){
		cout<<"请输入该图书新的书名:";
		cin>>Temp;
		//修改书名
		b1.update(y,Temp);
		b1.showBook(y); 
	} else{
		cout<<"未找到该书！"<<endl;
	}
	
	//显示所有的书的信息
	b1.showAll();
	
	cout<<"请输入要删除图书的书名：";
	cin>>Temp;
	//搜索书 
	int z=b1.search(Temp);
	if(z>=0){
		//删除书 
		b1.deleted(z);
		cout<<"共有图书本数："<<b1.bookNum<<endl;
	} else{
		cout<<"未找到该书！"<<endl;
	}
	 
	return 0;
}

