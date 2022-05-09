#include <iostream>
#include <string> 
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

class BookList{
	
	//����������� 
	Book bookList[10];
	public:
		int bookNum;
		
		BookList(){
			bookNum=0;
		};
		
		//������� 
		void insert(string newName,float newPrice);
		//��ʾ�����Ϣ 
		void showBook(int i);
		//������ 
		int search(string Name);
		//�޸����� 
		void update(int i,string newName);
		//ɾ���� 
		void deleted(int i);
		//��ʾ����
		void showBook_title();
		//��ʾ���е������Ϣ 
		void showAll();
};
