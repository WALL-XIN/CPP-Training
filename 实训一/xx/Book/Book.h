#include <iostream>
using namespace std;

class Book{
	private:
		//���� 
		string name;
		//�۸� 	
		float price;	
	public:
		//�õ����� 
		string getName();
		//�������� 
		void setName(const string newName);
		//�õ��۸� 
		float getPrice();
		//���ü۸� 
		void setPrice(const float newPrice);
};
