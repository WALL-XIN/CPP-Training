//Box.h
#include <iostream>
#include <string>
using namespace std;
class Box{
	private:
		float length;
		float width;
		float height;
	public:
		//��̬���Եĸ�ֵ 
		void get_value();
		//����ļ���
		float volume();
		//��̬���Ե���ʾ
		void display();
};


