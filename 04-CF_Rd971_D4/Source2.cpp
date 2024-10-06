// Date: September 3, 2024
// Contest link: https://codeforces.com/contest/2009
// Problem: B. osu!mania
// URL: https://codeforces.com/contest/2009/problem/B
/*
Status:
Draft 1:
*

*/
/* Draft notes:
* Draft 1:
*
*/


#include <iostream>
#include <vector>


using namespace std;



int main() {
    int t; // Number of test cases
    cin >> t;

    vector<vector <int>> results; // To store the results for each test case


    while (t--) {
        int n;
        cin >> n;
        vector<string> input;
        vector<int> output;
        for (int i = 0; i < n; i++)
        {
        string s;
		cin >> s;
        input.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (input[i][j] == '#')
                {
                    output.push_back(j);
                }
            }
        }



    }

    for (auto& result : results) {
        for (auto& ans : result)
        {
            cout << ans;
        }
    }



    return 0;
}
