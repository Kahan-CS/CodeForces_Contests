// Date: July 26, 2024
// Problem# A
/*
Status: 
Draft 1:
* Works, 
* Submitted, 
* Results : 
* GNU C11 - COMPILATION_ERROR :(
* C++20 (GCC 13-64)	- Wrong answer test 1

Draft 2:
* Works, Submitted
* Result: Accepted!!

*/ 
/* Draft notes:
* Draft 1: DAMN I forgot to add endl at the end!!!!
*/

// Start...
/*
#include <iostream>

using namespace std;

int countMinAnimals(int n)
{
	// For minimum animals, lets have maximum cows, hence divde the number n by 4 we get remainder, which can be used for chicks

	int cows = n / 4;
	int chicks = (n - (cows*4)) / 2;

	return cows + chicks;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		// cout << countMinAnimals(n); // Draft 1
		cout << countMinAnimals(n) << endl; // Draft 2
	}

	return 0;
}
*/