#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

//����������� 
Book bookList[10];
int bookNum=0,i=0;

//���������Ϣ 
void insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	//�����Ŀ+1 
	bookNum++;
};

//��ʾ�����Ϣ 
void showBook(int i){
	cout<<setw(15)<<bookList[i].getName()<<setw(15)<<bookList[i].getPrice()<<endl;
};

int main() {
	string Temp;
	//��������� 
	Book book;
	//����set����������������۸� 
	book.setName("��¥��");
	book.setPrice(30);
	//����get��������� ������۸� 
	cout<<book.getName()<<endl;
	cout<<book.getPrice()<<endl; 
	
	cout<<"���������������:";
	cin>>Temp;
	cout<<"����������ĵ���:";
	float pr;
	cin>>pr;
	//��������Ϣ��ӵ����������� 
	insert(Temp,pr);
	//��ʾ�������Ϣ 
	showBook(bookNum-1);
	 
	return 0;
}
