#include <iostream>
#include <string> 
using namespace std;

class Book{
	private:
		//书名 
		string name;
		//价格 	
		float price;	
	public:
		//得到书名 
		string getName();
		//设置书名 
		void setName(const string newName);
		//得到价格 
		float getPrice();
		//设置价格 
		void setPrice(const float newPrice);
};

class BookList{
	
	//定义对象数组 
	Book bookList[10];
	public:
		int bookNum;
		
		BookList(){
			bookNum=0;
		};
		
		//添加新书 
		void insert(string newName,float newPrice);
		//显示书的信息 
		void showBook(int i);
		//搜索书 
		int search(string Name);
		//修改书名 
		void update(int i,string newName);
		//删除书 
		void deleted(int i);
		//显示列名
		void showBook_title();
		//显示所有的书的信息 
		void showAll();
};
