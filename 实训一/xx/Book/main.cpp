#include <iostream>
#include "Book.h"
using namespace std;

int main() {
	//����Book����� 
	Book book;
	//����set������������ 
	book.setName("��¥��");
	//����set�������ü۸� 
	book.setPrice(30);
	//����get������������Ϣ 
	cout<<"������"<<book.getName()<<endl;
	cout<<"�۸�"<<book.getPrice(); 
	return 0;
}
