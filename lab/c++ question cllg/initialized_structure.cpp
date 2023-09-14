#include <iostream>

using namespace std;
struct Distance
{
	int feet;
	float inches;
};

int main()
{
	
	Distance d1 = { 15, 6.5 };
	Distance d2, d3; 
	
	// Element-wise Assignment.
	d2.feet = d1.feet;
	d2.inches = d1.inches;
	
	// Structure Variable Assignment.
	d3 = d1;
	
	cout << "\n d1 = " << d1.feet << "\'-" << d1.inches << "\"";
	cout << "\n d2 = " << d2.feet << "\'-" << d2.inches << "\"";
	cout << "\n d3 = " << d3.feet << "\'-" << d3.inches << "\"";
     return 0;
}
