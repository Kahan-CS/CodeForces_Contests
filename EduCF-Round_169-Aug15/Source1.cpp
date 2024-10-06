// Date: August 14, 2024
// Contest link: https://codeforces.com/contest/2004
// Problem: B. Game with Doors


/*
Status:
Draft 1:
* Submitted, wrong answer on test 2 
* Draft 2:
* Submitted, same result 
* Draft 3:
* Submitted, Accepted!

*/
/* Draft notes:
* Draft 1:
* I don't understand what went wrong. I am suspecting it is with 1st else if statement of l1 > l2, or maybe something to do with range of doors
* Okay I figured out i think, it is because of the logical error highlighted!
* Draft 2:
* Ooops, did not carefully fix the logical error, need to add +2, because if they intersect but not their boundaries, we still need to consider two doors outside of it
* Draft 3:
* Yayy! Probably can be optimized but who cares!
*/
/*
#include <iostream>
#include <vector>

using namespace std;

int solution(int& l1, int& r1, int& l2, int& r2)
{
	if (l1 < l2)
	{
		if (r1 < l2)
		{
			return 1;
		}
		else if (r1 == l2)
		{
			return 2;
		}
		else if (r1 > l2)
		{
			if (r1 > r2)
			{
				return r2 - l2 + 2;
			}
			else if (r1 == r2)
			{
				return r2 - l2 + 1;
			}
			else if (r1 < r2)
			{
				//return r2 - l2;
				//return r1 - l2;
				// logical issue in draft 1 & 2corrected				
				return r1 - l2 + 2;
			}
		}
	}
	else if (l2 < l1)
	{
		if (r2 < l1)
		{
			return 1;
		}
		else if (r2 == l1)
		{
			return 2;
		}
		else if (r2 > l1)
		{
			if (r2 > r1)
			{
				return r1 - l1 + 2;
			}
			else if (r2 == r1)
			{
				return r1 - l1 + 1;
			}
			else if (r2 < r1)
			{
				// return r1-l1;
				//return r2 - l1;
				// logical issue in draft 1 & 2 corrected
				return r2 - l1 + 2;
			}
		}
	}
	else if (l1 == l2)
	{
		if (r1 > r2)
		{
			return r2 - l2 + 1;
		}
		else if (r1 < r2)
		{
			return r1 - l1 + 1;
		}
		else if (r1 == r2)
		{
			return r1 - l1;
		}
	}

	return -1;
}


int main()
{
	int t;
	cin >> t;
	int a =0;
	vector<int> solutions(t);
	

	while (t--)
	{
		int l1, r1, l2, r2;
		cin >> l1 >> r1;
		cin >> l2 >> r2;

		solutions[a] = solution(l1, r1, l2, r2);
		
		a++;
	}

	for (int x : solutions)
	{
		cout << x << endl;
	}

	return 0;
}
*/