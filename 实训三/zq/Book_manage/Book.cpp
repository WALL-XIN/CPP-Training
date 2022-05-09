//Book.cpp
#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;

//��ȡ����
string Book::get_Name(){
	return name;
};

//��������
void Book::setName(const string newName){
	name = newName;
};

//��ȡ����
float Book::get_Price(){
	return price;
};

//���ĵ���
void Book::setPrice(const float newPrice){
	price =newPrice;
};

//���������Ϣ���ܺ���
void BookList::insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	bookNum++;
};

//���һ��ͼ��
void BookList::showBook(int i){
	cout<<setw(15)<<bookList[i].get_Name();
	cout<<setw(15)<<bookList[i].get_Price()<<endl;
};

//����ͼ����Ϣ���ܺ���
int BookList::search(string Name){
	int i;
	for(i=0;i<bookNum;i++){
		if(bookList[i].get_Name()==Name){
			return i;
		}
	}	
	if(i==bookNum){
		return -1;
	}
};

//�޸�ͼ����Ϣ���ܺ���
void BookList::update(int i,string newName){
	bookList[i].setName(newName);
};

//ɾ��ͼ����Ϣ���ܺ���
void BookList::deleted(int i){
	for(int j=i;j<(bookNum-1);j++){
		bookList[j].setName(bookList[j+1].get_Name());
		bookList[j].setPrice(bookList[j+1].get_Price());
	}
	bookNum--;
};

//�������
void BookList::showBook_title(){
	cout<<setw(15)<<"����"<<setw(15)<<"�۸�"<<endl;
};

//�������ͼ�����������Ϣ
void BookList::showAll(){
	showBook_title();
	for(int i=0;i<bookNum;i++){
		showBook(i);
		cout<<"����ͼ��"<<bookNum<<"��"<<endl; 
	}	
};
