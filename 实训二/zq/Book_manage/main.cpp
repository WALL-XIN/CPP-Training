#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

//����Book���������
Book bookList[10];
int bookNum=0,i=0;
string Temp;

//���������Ϣ���ܺ���
void insert(string newName,float newPrice){
	bookList[bookNum].setName(newName);
	bookList[bookNum].setPrice(newPrice);
	bookNum++;
};
//���һ��ͼ��
void showBook(int i){
	cout<<setw(15)<<bookList[i].get_Name()<<setw(15)<<bookList[i].get_Price()<<endl;
};

int main() { 
	Book b1;
	b1.setName("���μ�");
	b1.setPrice(100);
	cout<<b1.get_Name()<<endl;
	cout<<b1.get_Price()<<endl; 
	
	cout<<"���������������:";
	cin>>Temp;
	cout<<"����������ĵ���:";
	float pr;
	cin>>pr;
	insert(Temp,pr);
	showBook(bookNum-1);
	
	return 0;
}
