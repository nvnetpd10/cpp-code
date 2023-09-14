#include<iostream>
using namespace std;
class Demo
{
	private:
	  double x;
	  double y;
	public:
	Demo(double X=0, double Y=0)
	{
		x = X;
		y = Y;
	}
	Demo(void)
	{
		x=y=0;
	}
	void display(){
	cout<<x<<endl;
	cout<<y<<endl;
	}
};
int main()
{
	Demo p1(3,5);
	Demo p2(4);
	p1.display();
	p2.display();
	//Point p3;
	return 0;
}
