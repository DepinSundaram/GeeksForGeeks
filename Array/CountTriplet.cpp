/*
Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
 
Example 1:

Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 2
Explanation: There are 2 triplets: 
1 + 2 = 3 and 3 +2 = 5 
â€‹Example 2:

Input: 
N = 3
arr[] = {2, 3, 4}
Output: 0
Explanation: No such triplet exits
Your Task:  
You don't need to read input or print anything. Your task is to complete the function countTriplet() which takes the array arr[] and N as inputs and returns the triplet count

Expected Time Complexity: O(N2)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 103
1 ≤ arr[i] ≤ 105
*/
#include <iostream>
#include <stdio.h>

class Solution {
public:
    int maxIndexDiff(int arr[], int n)
    {
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << std::endl;
        }

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i+1; j < n - 1; j++)
            { 
                int z = j + 1;
                while (z < n)
                {
                    if (arr[i] + arr[j] == arr[z])
                        count++;
                    if (arr[i] + arr[j] < arr[z])
                        break;
                    z++;
                }
            }
        }
        return count;
    }
};



int main() {
    int n;
    using namespace std;
    cin >> n;
    int* a = (int*)malloc(sizeof(int) * n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";

    return 0;
}
