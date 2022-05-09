#include <iostream>
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
