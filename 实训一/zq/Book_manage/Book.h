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
