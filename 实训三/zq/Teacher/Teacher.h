//Teacher.h
#include <iostream>
#include <string>
using namespace std;

class BirthDate{
	private:
		int year;
		int month;
		int day;
	public:
		//��̬���Եĸ�ֵ
		BirthDate(int y,int m,int d):year(y),month(m),day(d){};
		//��Ա�������ݵ���ʾ
		void display();
		//�ı���������
		void changeDate(int y,int m,int d);
};

class Teacher{
	protected:
		int num;
		string name;
		char sex;
		BirthDate birthday;
	public:
		//��̬���Եĸ�ֵ 
		Teacher(int n,string na,char s,int y,int m,int d):birthday(y,m,d),num(n),name(na),sex(s){};
		//��Ա�������ݵ���ʾ
		void display();
		//�ı�����
		void changeDate(int y,int m,int d);
}; 
