#include <vector>

using namespace std;

/********* Insertion sort ********
 * Average time complexity  O(n^2)
 * Best                     O(n)
 * Worst                    O(n^2)
 * Space complexity         O(1)
 * Stable                   Yes
 */

void StraightInsertionSort(vector<int> &arr)
{
    int n = arr.size();
    // Use the first position to store value and simplify out-of-range check. Called 'Sentinel'
    arr.insert(arr.begin(), 0);

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            arr[0] = arr[i];
            int j;
            for (j = i - 1; arr[0] < arr[j]; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = arr[0];
        }
    }

    arr.erase(arr.begin());
}

void BinaryInsertionSort(vector<int> &arr)
{
    int n = arr.size();
    arr.insert(arr.begin(), 0); // Sentinel

    // Index for binary search (inclusive)
    int begin, end, mid;

    for (int i = 2; i <= n; i++)
    {
        arr[0] = arr[i];
        begin = 1;
        end = i - 1;

        // Binary search
        while (begin <= end)
        {
            mid = begin + (end - begin) / 2;
            if (arr[mid] > arr[0])
            {
                end = mid - 1;
            }
            else
            {
                begin = mid + 1;
            }
        }

        // Move elements
        for (int j = i - 1; j >= begin /* end + 1 */; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[begin] = arr[0];
    }

    arr.erase(arr.begin());
}
