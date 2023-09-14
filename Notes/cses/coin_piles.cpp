// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if two given piles
// can be emptied by repeatedly removing
// 2 coins from a pile and 1 coin from the other
void canBeEmptied(int A, int B)
{
	// If maximum of A & B exceeds
	// the twice of minimum of A & B
	if (max(A, B) > 2 * min(A, B)) {

		// Not possible to
		// empty the piles
		cout << "No";
		return;
	}

	// If sum of both the coins is
	// divisible by 3, then print Yes
	if ((A + B) % 3 == 0)
		cout << "Yes";

	// Otherwise, print "No"
	else
		cout << "No";
}

// Driver Code
int main()
{
	int A = 1, B = 2;
	canBeEmptied(A, B);

	return 0;
}
