// Date: July 26, 2024
// Problem# B
// Status: Doesn't Work :(

// Start...
#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void skipLine(std::istream& cin) {
	// Skip characters until the end of the current line
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, k;

		cin >> n >> k;
		
		vector<int> grid(k*k);
		int a = 0;

        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
		for (int i = 0; i < n; i += k)
		{
			for (int j = 0; j < n; j += k)
			{
				int value;
				cin >> value;
				grid[a++] = value;
				cin.ignore(k-1);
			}
			// skipLine(cin);
			
			// skip next k lines
			for (int i = 0; i < k; i++) {
				skipLine(cin);
			}
        }

		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < k; j++)
			{
				cout << grid[i + j];
			}
			cout << endl;
		}

	}

	return 0;
}
