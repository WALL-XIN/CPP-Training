#include <iostream>
#include "Book.h"
using namespace std;

int main() {
	//定义Book类对象 
	Book book;
	//调用set方法设置书名 
	book.setName("红楼梦");
	//调用set方法设置价格 
	book.setPrice(30);
	//调用get方法输出书的信息 
	cout<<"书名："<<book.getName()<<endl;
	cout<<"价格："<<book.getPrice(); 
	return 0;
}
