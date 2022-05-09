#include <iostream>
#include <math.h>
#include "Tri.h"
using namespace std;

//构造方法 
Tri::Tri(double a1,double b1,double c1){
	a = a1;
	b = b1;
	c = c1;
};

//使用"海伦公式"计算三角形面积
float Tri::area(){
	s = (a+b+c)/2;
	return (sqrt(s*(s-a)*(s-b)*(s-c)));
};

//设置a,b,c的值 
void Tri::setABC(){
	cout<<"输入abc的值:";
	cin>>a;
	cin>>b;
	cin>>c;
	
	//判断三边能否构成三角形 
	if (a+b>c && a+c>b && b+c>a){
        cout<<"你输入的三条边能够组成三角形"<<endl;
    }
    else{
    	//若不能则调用set方法重新输入三边 
        cout<<"你输入的三条边不能组成三角形请重新输入"<<endl;
        setABC();
    }
};
