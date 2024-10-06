// Date: August 30, 2024
// Contest link: https://codeforces.com/contest/2007
// Problem: B. Index and Maximum Value
// URL: https://codeforces.com/contest/2007/problem/B

/*
Status:
Draft 1:
* Submitted. Failed because time limit exceeded on pretest 5.
* 
* Draft 2:
* Submitted. Failed because time limit exceeded on pretest 5.

*/
/* Draft notes:
* Draft 1:
* 
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(char& op, int& l, int& r, vector<int>& arr)
{
    // Iterate and perform the operation until the value exceeds 'r'
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        if (*it >= l && *it <= r)
        {
            if (op == '+') {
                *it += 1;
            }
            else if (op == '-') {
                *it -= 1;
            }
        }
    }

	//sort(arr.begin(), arr.end());
	return *(max_element(arr.begin(), arr.end()));
}


int main() {
    int t; // Number of test cases
    cin >> t;

    vector<vector<int>> results; // To store the results for each test case

    while (t--) {
        int n, m; // Length of the array and number of operations
        cin >> n >> m;

        vector<int> arr(n); // The array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> result; // To store the maximum values after each operation for this test case

		//sort(arr.begin(), arr.end());
        for (int i = 0; i < m; i++) {
            char op;
            int l, r;
            cin >> op >> l >> r;

            result.push_back(solution(op, l, r, arr));
        }

        results.push_back(result); // Store the result for this test case
    }

    // Output the results for all test cases
    for (const auto& result : results) {
        for (int max_val : result) {
            cout << max_val << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution(char op, int l, int r, vector<int>& arr, int& currentMax) {
    for (auto& value : arr) {
        if (value >= l && value <= r) {
            if (op == '+') {
                value += 1;
                // Update currentMax if necessary
                if (value > currentMax) {
                    currentMax = value;
                }
            }
            else if (op == '-') {
                value -= 1;
                // Update currentMax if necessary
                if (value == currentMax) {
                    currentMax = *max_element(arr.begin(), arr.end());
                }
            }
        }
    }
}

int main() {
    int t; // Number of test cases
    cin >> t;

    vector<vector<int>> results; // To store the results for each test case

    while (t--) {
        int n, m; // Length of the array and number of operations
        cin >> n >> m;

        vector<int> arr(n); // The array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int currentMax = *max_element(arr.begin(), arr.end()); // Initialize currentMax
        vector<int> result; // To store the maximum values after each operation for this test case

        for (int i = 0; i < m; i++) {
            char op;
            int l, r;
            cin >> op >> l >> r;

            solution(op, l, r, arr, currentMax);
            result.push_back(currentMax);
        }

        results.push_back(result); // Store the result for this test case
    }

    // Output the results for all test cases
    for (const auto& result : results) {
        for (int max_val : result) {
            cout << max_val << " ";
        }
        cout << endl;
    }

    return 0;
}
