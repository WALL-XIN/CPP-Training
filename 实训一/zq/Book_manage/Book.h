//Book.h
#include <iostream>
using namespace std;

class Book{
	private:
		string name; 
		float price;
	public:
		//��ȡ����
		string get_Name();
		//��������
		void setName(const string newName);
		//��ȡ����
		float get_Price();
		//���ĵ���
		void setPrice(const float newPrice);
};
