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

class BookList{
	//����Book���������,��ͼ���б�����
	Book bookList[10];
	public:
		int bookNum;
		
		BookList(){
			bookNum=0;
		};
		
		//���������Ϣ���ܺ���
		void insert(string newName,float newPrice);
		//���һ��ͼ��
		void showBook(int i);
		//����ͼ����Ϣ���ܺ���
		int search(string Name);
		//�޸�ͼ����Ϣ���ܺ���
		void update(int i,string newName);
		//ɾ��ͼ����Ϣ���ܺ���
		void deleted(int i);
		//�������
		void showBook_title();
		//�������ͼ�����������Ϣ
		void showAll();
};
