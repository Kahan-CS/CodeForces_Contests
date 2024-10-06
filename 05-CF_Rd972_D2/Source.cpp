// Date: September 14, 2024
// Contest link: https://codeforces.com/contest/2005
// Problem: B1. The Strict Teacher (Easy Version) & B2. Hard Version for the same
// URL: https://codeforces.com/contest/2005/problem/B1\

/*
Status:
Draft 1:
* Submitted for both B1 AND B2, failed the tests
Draft 2:
* Submitted for B2, failed the same test (pretest 2)
*/
/* Draft notes:
* Draft 1:
* I am so stupid, I assumed two teachers and continued to submit for B2, also, it did not work for B1 either, which means that I need to rethink the solution.
* Draft 2:
* I am sure the solution works, it is perfect to me, something is going wrong but I do not know what is failing those tests
*
*/


#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

vector<int> solution(int& n, vector<int>& teachers, vector<int>& david) {
	vector<int> answer(david.size());

	// Step 1: Sort the teachers' locations
	sort(teachers.begin(), teachers.end());

	// Step 2: Process each of David's locations (queries)
	for (int i = 0; i < david.size(); i++) {
		int davidPos = david[i];
		int nearestTeacher;
		// Use binary search to find the closest teacher
		auto it = lower_bound(teachers.begin(), teachers.end(), davidPos);

		if (it == teachers.end()) {
			// Case 1: David is to the right of all teachers
			nearestTeacher = teachers.back();
			answer[i] = n - nearestTeacher;
		}
		else if (it == teachers.begin())
		{
			// Case 2: David is to the left of all teachers
			nearestTeacher = teachers[0];
			answer[i] = nearestTeacher - 1;
		}
		else {
			// Case 3: David is between two teachers
			nearestTeacher = *it;
			if (abs(*(it - 1) - davidPos) < abs(nearestTeacher - davidPos)) {
				nearestTeacher = *(it - 1);
			}
			answer[i] = abs(nearestTeacher - davidPos);
		}
	}

	return answer;
}


int main() {
	int t; // Number of test cases
	cin >> t;

	vector<vector <int>> results; // To store the results for each test case


	while (t--) {

		// n cells, m teachers, q queries for David's location
		int n, m, q;
		cin >> n >> m >> q;

		// Locations m of teachers
		vector<int> a(m);
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
		}
		// Queries for David's location
		vector<int> b(q);
		for (int i = 0; i < q; i++)
		{
			cin >> b[i];
		}

		results.push_back(solution(n, a, b));

	}

	for (auto& result : results) {
		for (auto& ans : result)
		{
			cout << ans << endl;
		}
	}



	return 0;
}
