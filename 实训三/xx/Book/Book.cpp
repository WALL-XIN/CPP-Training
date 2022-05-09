#include <iostream>
#include <string> 
#include <iomanip>
#include "Book.h"
using namespace std;


//�õ����� 
string Book::getName(){
	return name;
};

//�������� 
void Book::setName(const string newName){
	name = newName;
};

//�õ��۸� 
float Book::getPrice(){
	return price;
};

//���ü۸� 
void Book::setPrice(const float newPrice){
	price =newPrice;
};

//���������Ϣ 
void BookList::insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	//�����Ŀ+1 
	bookNum++;
};

//��ʾ�����Ϣ 
void BookList::showBook(int i){
	cout<<setw(15)<<bookList[i].getName();
	cout<<setw(15)<<bookList[i].getPrice()<<endl;
};

//������ 
int BookList::search(string Name){
	int i;
	for(i=0;i<bookNum;i++){
		if(bookList[i].getName()==Name){
			return i;
		}
	}	
	if(i==bookNum){
		return -1;
	}
};

//�޸����� 
void BookList::update(int i,string newName){
	bookList[i].setName(newName);
};

//ɾ���� 
void BookList::deleted(int i){
	for(int j=i;j<(bookNum-1);j++){
		bookList[j].setName(bookList[j+1].getName());
		bookList[j].setPrice(bookList[j+1].getPrice());
	}
	bookNum--;
};

//��ʾ����
void BookList::showBook_title(){
	cout<<setw(15)<<"����"<<setw(15)<<"�۸�"<<endl;
};

//��ʾ���е������Ϣ 
void BookList::showAll(){
	showBook_title();
	for(int i=0;i<bookNum;i++){
		showBook(i);
		cout<<"����ͼ��"<<bookNum<<"��"<<endl; 
	}	
};




























