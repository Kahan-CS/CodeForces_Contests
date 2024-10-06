// Date: August 30, 2024
// Contest link: https://codeforces.com/contest/2007
// Problem: A. Dora's Set
// URL: https://codeforces.com/contest/2007/problem/A

/*
Status:
Draft 1:
* Did not submit. Does not work properly yet.

*/
/* Draft notes:
* Draft 1:
* It is calculating ALL the coprime triplets, but we need to find the maximum number of "operations" of eliminating such triplets.
*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//bool coprime(int a, int b) {
//
//    if (gcd(a, b) == 1)
//        return true;
//    else
//        return false;
//}
//
//int solution(int start, int end)
//{
//    int result = 0;
//    for (int i = start; i <= (end - 2); i++)
//    {
//        for (int j = i + 1; j <= (end - 1) && j > i; j++)
//        {
//            if (coprime(i, j) == true)
//            {
//                for (int k = j + 1; k <= end; k++)
//                {
//                    if ((coprime(j, k) && coprime(k, i))== true)
//                    {
//                        result++;
//
//						// for debugging
//                        cout << "i,j,k, result =" << i << " , " << j << " , " << k << " , " << result << endl;
//                    }
//
//                }
//            }
//
//        }
//    }
//    return result;
//}
//
//
//
//
//
//int main()
//{
//
//    int t;
//    cin >> t;
//    vector<int> solutions;
//
//
//    while (t--)
//    {
//        int l, r;
//        cin >> l >> r;
//        solutions.push_back(solution(l, r));
//
//    }
//
//    for (auto& s : solutions)
//    {
//        cout << s << endl;
//    }
//
//    return 0;
//}