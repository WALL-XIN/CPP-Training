//Tri.h
#include <iostream>
using namespace std;

class Tri{
	private:
		//abc�ֱ�Ϊ�����ε����� 
		float a;	 
		float b;
		float c;
		//sΪ�����εİ��ܳ� 
		float s;
	public:
		//����вι��췽�� 
		Tri(double a1=1,double b1=1,double c1=1);
		//����abc��ֵ 
		void setABC();
		//���������ε���� 
		float area();
}; 
