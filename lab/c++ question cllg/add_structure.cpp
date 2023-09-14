// Program to Add Two Structure Variables

#include <iostream>
using namespace std;

struct distance
{
	int feet;
	float inches;
};

int main()
{
	
	distance d1, d3;
	distance d2 = { 10, 6.5 };

	cout << "\n Enter feet ::: ";
	cin >> d1.feet;
	cout << "\n Enter inches ::: ";
	cin >> d1.inches;

	d3.feet = d1.feet + d2.feet;
	d3.inches = d1.inches + d2.inches;
	
	
	cout << d1.feet << "\'-" << d1.inches << "\" + ";
	cout << d2.feet << "\'-" << d2.inches << "\" = ";
	cout << d3.feet << "\'-" << d3.inches << "\"\n";

return 0;
}
