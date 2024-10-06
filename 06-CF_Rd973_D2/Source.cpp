// Date: September 20, 2024
// Contest link: https://codeforces.com/contest/2013
// Problem: A. Zhan's Blender
// URL: https://codeforces.com/contest/2013/problem/A
/*
Status:
Draft 1:
* Submitted, failed pretest 1
Draft 2:
* Submitted, passed all tests. Success!

*/
/* Draft notes:
* Draft 1:
* I completely missed to add the endl in the result output. I will fix that and resubmit.
*/

/*
#include <iostream>
#include <vector>

using namespace std;

int solution(int& n, int& x, int& y)
{
	if (n % min(x, y) == 0)
	{
		return n / min(x, y);
	}
	return (n / min(x, y)) + 1;
}

int main() {
	int t; // Number of test cases
	cin >> t;

	vector<int> results; // To store the results for each test case


	while (t--) {


		int n, x, y;
		cin >> n;
		cin >> x >> y;


		results.push_back(solution(n, x, y));


	}

	for (auto& ans : results) {

		cout << ans << endl;

	}



	return 0;
}
*/