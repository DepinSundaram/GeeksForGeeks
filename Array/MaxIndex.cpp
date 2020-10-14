/*
Given an array Arr[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of Arr[i] <= Arr[j].

Example 1:

Input:
N = 9
Arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output: 6
Explanation: In the given array Arr[1] <
Arr[7]  satisfying the required condition
(Arr[i] <= Arr[j])  thus giving the
maximum difference of j - i which is
6(7-1).

Your Task:
Complete the function maxIndexDiff() which takes array arr and size n, as input parameters and returns an integer representing the answer. You don't to print answer or take inputs.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 103
0 ≤ Arr[i] ≤ 1018
*/
#include <iostream>
#include <stdio.h>

class Solution {
public:
    int maxIndexDiff(int arr[], int n)
    {
        int mIndex = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j <= 0; j--)
            {
                printf("arr[%d] %d arr[%d] j %d \n ", i, j, arr[i], arr[j]);
                if (arr[i] <= arr[j])
                {
                    if (mIndex < j - i)
                    {
                        mIndex = j - i;
                    }
                }
            }
            // code here
        }
        return mIndex;
    }
};

int main() {
    int t, n;
    using namespace std;
    cin >> t;
    while (t--) {
        cin >> n;
        int* a = (int*)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}

