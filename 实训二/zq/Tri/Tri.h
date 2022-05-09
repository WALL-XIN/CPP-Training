//Tri.h
#include <iostream>
using namespace std;

class Tri{
	private:
		//abc分别为三角形的三边 
		float a;	 
		float b;
		float c;
		//s为三角形的半周长 
		float s;
	public:
		//类的有参构造方法 
		Tri(double a1=1,double b1=1,double c1=1);
		//输入abc的值 
		void setABC();
		//计算三角形的面积 
		float area();
}; 
