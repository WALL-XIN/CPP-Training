#include <iostream>
#include <math.h>
#include "Tri.h"
using namespace std;

//���췽�� 
Tri::Tri(double a1,double b1,double c1){
	a = a1;
	b = b1;
	c = c1;
};

//ʹ��"���׹�ʽ"�������������
float Tri::area(){
	s = (a+b+c)/2;
	return (sqrt(s*(s-a)*(s-b)*(s-c)));
};

//����a,b,c��ֵ 
void Tri::setABC(){
	cout<<"����abc��ֵ:";
	cin>>a;
	cin>>b;
	cin>>c;
	
	//�ж������ܷ񹹳������� 
	if (a+b>c && a+c>b && b+c>a){
        cout<<"��������������ܹ����������"<<endl;
    }
    else{
    	//�����������set���������������� 
        cout<<"������������߲����������������������"<<endl;
        setABC();
    }
};
