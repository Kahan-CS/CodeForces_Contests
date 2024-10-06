// Date: August 14, 2024
// Contest link: https://codeforces.com/contest/2004
// Problem: C. Splitting Items


/*
Status:
Draft 1:
* Submitted, but failed on test 1!
*/
/* Draft notes:
* Draft 1:
* Oh no, a simple logical error 
* Draft 2:
* Another simple logical error: diff was wrongly defined
* Draft 3:
* Seems as though I need to 
* 
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(int& n, int& k, vector<int>& arr)
{
	sort(arr.begin(), arr.end());
	int mid = (n / 2);
	int diff = arr[mid+1] - arr[mid];
	int bsum = accumulate(arr.begin(), arr.begin() + mid, 0);
	int asum = accumulate(arr.begin() + mid + 1, arr.end(), 0);

	if (k < diff)
	{
		return asum - (bsum + k);
	}
	else
	{
		return 0;
	}
	return -1;
}


int main()
{
	int t;
	cin >> t;
	int a = 0;
	vector<int> solutions(t);


	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> arr;
		for (int i = 0; i < n; i++) 
		{
			int num;
			cin >> num; 
			arr.push_back(num);
		}
		solutions[a] = solution(n, k, arr);
		a++;
	}

	for (int x : solutions)
	{
		cout << x << endl;
	}

	return 0;
}