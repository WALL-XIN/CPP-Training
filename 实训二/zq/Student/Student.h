//Student.h
#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		int num;
		string name;
		float score;
	public:
		//ʵ������Ĺ��캯���ж�����ʽ������ʼ����Ա������ֵ
		Student(int n,string na,float s):num(n),name(na),score(s){};
		//��ʾѧ������ 
		void display();
};
