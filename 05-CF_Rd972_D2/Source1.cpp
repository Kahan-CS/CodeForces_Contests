// Date: September 14, 2024
// Contest link: https://codeforces.com/contest/2005
// Problem: A. Simple Palindrome
// URL: https://codeforces.com/contest/2005/problem/A

/*
Status:
Draft 1:
* Not submitted yet

*/
/* Draft notes:
* Draft 1:
*
*/

/*

#include <iostream>
#include <vector>
#include <string>


using namespace std;


string solution(int& n)
{
	string answer;
	char vowels[5] = { 'a' ,'e','i','o','u' };

	if (n < 5)
	{
		for (int i = 0; i < n; i++)
		{
			answer.push_back(vowels[i]);
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			answer.push_back(vowels[i]);
		}
		for (int i = 0; i < n - 5; i++)
		{
			answer.push_back('i');
		}
	}
	return answer;
}

int main() {
	int t; // Number of test cases
	cin >> t;

	vector<string> results; // To store the results for each test case


	while (t--) {
		int n;
		cin >> n;

		results.push_back(solution(n));


	}

	for (auto& result : results) {
		cout << result << endl;
	}



	return 0;
}


*/
