// Date: September 3, 2024
// Contest link: https://codeforces.com/contest/2009
// Problem: C. The Legend of Freya the Frog
// URL: https://codeforces.com/contest/2009/problem/C
/*
Status:
Draft 1:
* Submitted, Accepted!

*/
/* Draft notes:
* Draft 1:
* 
*/
/*
#include <iostream>
#include <vector>


using namespace std;

int stepsToX(int x, int k) {
	return x / k + (x % k != 0);
}

int stepsToY(int y, int k) {
	return y / k + (y % k != 0);
}

int solution(int x, int y, int k)
{
	int stepsx = stepsToX(x, k), stepsy = stepsToY(y, k);
    if (stepsx - stepsy <= 1 && stepsx - stepsy > -1) {
        return stepsToX(x, k) + stepsToY(y, k);
    }
	else if (stepsx - stepsy > 1) {
		return 2 * stepsx - 1;
	}
    else
    {
        return 2 * stepsy;
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;

	vector<int> results; // To store the results for each test case


    while (t--) {
        int x, y, k; // Length of the array and number of operations
		cin >> x >> y >> k;

		results.push_back(solution(x, y, k));
        
    }

    for (auto& result : results) {
        cout << result << endl;
    }

    

    return 0;
}
*/