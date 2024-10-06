// Date: August 14, 2024
// Contest link: https://codeforces.com/contest/2004
// Problem: A. Closest Point

/*
Status:
Draft 1:
* Submitted
* Did not solve test 1, failed
* 

Draft 2:
* Submitted
* Solved and Accepted!

*/
/* Draft notes:
* Draft 1: 
* Ughhh, forgot to do a++, due to which the vector remained with only one answer, that too wrong obviously
*/

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//string solution(int n, vector<int> arr)
//{
//	if (n > 2)
//	{
//		// Not possible to add such an integer UNLESS we allow repeated values in set, which is not exactly specified in the question
//		return "NO";
//	}
//	else {
//		if (abs(arr[1] - arr[0]) == 1)
//		{
//			return "NO";
//		}
//		else
//		{
//			return "YES";
//		}
//	}
//
//	return "INVALID";
//}
//
//
//
//int main()
//{
//
//	int t;
//	cin >> t;
//	int a =0;
//	vector<string> solutions(t);
//
//	while (t--)
//	{
//		int n;
//		cin >> n;
//		vector<int> arr;
//		for (int i = 0; i < n; i++) 
//		{
//			int num;
//			cin >> num; 
//			arr.push_back(num);
//		}
//		solutions[a] = solution(n, arr);
//		a++;
//	}
//
//	for (string x : solutions) {
//		cout << x << endl;
//	}
//
//	return 0;
//}