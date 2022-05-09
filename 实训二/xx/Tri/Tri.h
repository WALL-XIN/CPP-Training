#include <iostream>
using namespace std;

class Tri{
	private:
		//定义三角形三边 
		float a,b,c;
		//定义s，s为三边之和用来计算三角形面积 
		float s;
	public:
		//构造方法 
		Tri(double a1=1,double b1=1,double c1=1);
		//设置a,b,c的值 
		void setABC();
		//计算三角形面积 
		float area();
};
