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
		//静态属性的赋值 
		void get_value();
		//体积的计算
		float volume();
		//静态属性的显示
		void display();
};


