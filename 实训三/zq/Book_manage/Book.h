//Book.h
#include <iostream>
using namespace std;

class Book{
	private:
		string name;
		float price;
	public:
		//获取书名
		string get_Name();
		//设置书名
		void setName(const string newName);
		//获取单价
		float get_Price();
		//更改单价
		void setPrice(const float newPrice);
};

class BookList{
	//生成Book类对象数组,即图书列表数组
	Book bookList[10];
	public:
		int bookNum;
		
		BookList(){
			bookNum=0;
		};
		
		//添加新书信息功能函数
		void insert(string newName,float newPrice);
		//输出一本图书
		void showBook(int i);
		//查找图书信息功能函数
		int search(string Name);
		//修改图书信息功能函数
		void update(int i,string newName);
		//删除图书信息功能函数
		void deleted(int i);
		//输出列名
		void showBook_title();
		//输出所有图书的书名等信息
		void showAll();
};
