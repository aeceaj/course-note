#include <vector>
#include <queue>

using namespace std;

/************ Radix sort ************
 * Time complexity          O(d(n+r))
 * Space complexity         O(r)
 * Stable                   Yes
 */

/**
 * @brief Get one digit in an integer.
 * @param num Target integer.
 * @param r Radix of the integer.
 * @param d Index of the digit (0-indexed).
 * @return The d-th least significant digit of the integer.
 */
int GetDigit(int num, int r, int d)
{
    int tmp = 1;
    for (int i = 0; i < d; i++)
    {
        tmp *= r;
    }
    return num / tmp % r;
}

/**
 * @brief LSD Radix sort.
 * @param arr Target array.
 * @param r Radix of the keys.
 * @param d Key length.
 */
void RadixSort(vector<int> &arr, int r, int d)
{
    vector<queue<int>> tmpQueue(r);
    for (int i = 0; i < d; i++)
    {
        for (int num : arr)
        {
            tmpQueue[GetDigit(num, r, i)].push(num);
        }
        int j = 0;
        for (int k = 0; k < r; k++)
        {
            while (!tmpQueue[k].empty())
            {
                arr[j++] = tmpQueue[k].front();
                tmpQueue[k].pop();
            }
        }
    }
}
