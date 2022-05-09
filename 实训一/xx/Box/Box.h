#include <iostream>
#include <string>
using namespace std;
class Box{
	private:
		//长 
		float length;
		//宽 
		float width;
		//高 
		float height;
	public:
		//输入长宽高 
		void get_value();
		//求体积 
		float volume();
		//调用求体积的方法并输出 
		void display();
};


