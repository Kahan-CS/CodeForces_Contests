// Date: September 3, 2024
// Contest link: https://codeforces.com/contest/2009
// Problem: D. Satyam and Counting
// URL: https://codeforces.com/contest/2009/problem/D
/*
Status:
Draft 1:
* 

*/
/* Draft notes:
* Draft 1:
*
*/
/*
#include <iostream>
#include <vector>


using namespace std;

bool occursTwice(const std::vector<int>& vec, int item, int index) {
    int count = 0;
    for (int i = index; i < vec.size() && count < 2; ++i) {
        if (vec[i] == item) {
            ++count;
        }
    }
    return count == 2;
}

int standingLines(const std::vector<int>& vec) {
	int count = 0;
	for (int i = 0; i < vec.size()/2 + 1; ++i) {
		if (occursTwice(vec, vec[i], i)) {
			++count;
		}
	}
	return count;
}



int main() {
    int t; // Number of test cases
    cin >> t;

    vector<int> results; // To store the results for each test case


    while (t--) {
        

    }

    for (auto& result : results) {
        cout << result << endl;
    }



    return 0;
}
*/