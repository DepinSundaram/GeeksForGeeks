/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15
*/

#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int testCount;
    int E_Sum;
    int E_Count;
    int sum = 0;
    cin >> testCount;

    for (int i = 0; i < testCount; i++) {
        cin >> E_Count;
        cin >> E_Sum;
        int iRange = 0;
        int* arr = NULL;
        arr = (int*)malloc(E_Count * sizeof(int));
        for (int z = 0; z < E_Count; z++)
        {
            cin >> arr[z];
        }
        for (int j = 0; j < E_Count; j++) {
            sum += arr[j];
            if (sum == E_Sum) {
                cout << iRange + 1 << " " << j + 1 << std::endl;
                break;
            }
            else if (sum < E_Sum) {
                continue;
            }
            else if (sum > E_Sum) {
                iRange++;
                j = iRange - 1;
                sum = 0;
            }
            else { cout << "-1" << std::endl; }
        }
        sum = 0;
        delete arr;
    }


    //code
    return 0;
}
}