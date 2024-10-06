// Date: September 20, 2024
// Contest link: https://codeforces.com/contest/2013
// Problem: B. Battle for Survive
// URL: https://codeforces.com/contest/2013/problem/B
/*
Status:
Draft 1:
* I finished solving it just in time, BUT could not submit!!
// Contest was over.

* Submitted post contest, but failed a certain test!
Draft 2:
* Submitted again two times, but does not pass that test

Draft 3:
* Submitted, accepted!

*/
/* Draft notes:
* Draft 1:
* Easy peasy, just took a while to understand how to make accumulate work as it was not working!
* Seems like I made an error for cases where n = 2;
* Seems like there is a bigger error, which is about the int overflow, need to use long long int

Draft 2:
* Despite of those changes not successful

Draft 3:
* Did some research, turns out I need to use 0LL to initialize accumulate() function to long long int
*/


#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long int solution(vector<long long int>& a, int& n)
{
	if (n > 2)
	{
		return a.at(n - 1) - (a.at(n - 2) - accumulate(a.begin(), a.begin() + n - 2, 0LL));
	}
	return a.at(1) - a.at(0);
}

int main() {
	int t; // Number of test cases
	cin >> t;

	vector<long long int> results; // To store the results for each test case


	while (t--) {
		int n;
		cin >> n;
		vector<long long int> fighter_ratings(n);
		for (int i = 0; i < n; i++)
		{
			long long int a;
			cin >> a;
			fighter_ratings[i] = a;
		}
		results.push_back(solution(fighter_ratings, n));




	}

	for (auto& result : results) {
		cout << result << endl;
	}



	return 0;
}
