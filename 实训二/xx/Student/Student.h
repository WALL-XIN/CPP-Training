#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		//ѧ�� 
		int num;
		//���� 
		string name;
		//�ɼ� 
		float score;
	public:
		//����Ĺ��캯���ж�����ʽ������ʼ����Ա������ֵ;
		Student(int n,string na,float s):num(n),name(na),score(s){};
		//���ѧ����Ϣ 
		void display();
};
