//main.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

int main() {
	
	BookList b1;
	float pr;
	string Temp;
	
	cout<<"���������������:";
	cin>>Temp;
	cout<<"����������ĵ���:";
	cin>>pr;
	b1.insert(Temp,pr);		//���һ������ 
	b1.showBook(b1.bookNum-1);	//�������������Ϣ 
	
	cout<<"������Ҫ����ͼ�������:";
	cin>>Temp;
	int x=b1.search(Temp);
	if(x>=0){
		b1.showBook(x);
	}else{
		cout<<"δ�ҵ����飡"<<endl; 
	}
	
	cout<<"������Ҫ�޸�ͼ�������:";
	cin>>Temp;
	int y=b1.search(Temp);
	if(y>=0){
		cout<<"�������ͼ���µ�����:";
		cin>>Temp;
		b1.update(y,Temp);	//�������� 
		b1.showBook(y); 	//����޸ĺ������Ϣ 
	} else{
		cout<<"δ�ҵ����飡"<<endl;
	}
	
	////�������ͼ�����������Ϣ 
	b1.showAll();
	
	cout<<"������Ҫɾ��ͼ���������";
	cin>>Temp;
	int z=b1.search(Temp);	//�������� 
	if(z>=0){
		b1.deleted(z);
		cout<<"����ͼ�鱾����"<<b1.bookNum<<endl;
	} else{
		cout<<"δ�ҵ����飡"<<endl;
	}
	 
	return 0;
}
