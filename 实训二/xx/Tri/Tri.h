#include <iostream>
using namespace std;

class Tri{
	private:
		//�������������� 
		float a,b,c;
		//����s��sΪ����֮������������������� 
		float s;
	public:
		//���췽�� 
		Tri(double a1=1,double b1=1,double c1=1);
		//����a,b,c��ֵ 
		void setABC();
		//������������� 
		float area();
};
