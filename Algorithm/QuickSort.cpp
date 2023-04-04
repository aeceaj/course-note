#include <vector>

using namespace std;

/************ Quick sort ***********
 * Average time complexity  O(nlogn)
 * Best                     O(nlogn)
 * Worst                    O(n^2)
 * Space complexity         O(logn)
 * Stable                   No
 */

/**
 * @brief Quick sort using recursion.
 * @param arr Target array.
 * @param begin Begin index (inclusive).
 * @param end End index (inclusive).
 */
void QuickSort(vector<int> &arr, int begin, int end)
{
    if (begin >= end)
    {
        return;
    }

    // Partition
    int i = begin;
    int j = end;
    int pivot = arr[i];
    while (i < j)
    {
        // Find the number less than pivot in the right part and swap
        while (i < j && arr[j] >= pivot)
        {
            j--;
        }
        if (i < j)
        {
            arr[i] = arr[j];
        }
        // Find the number greater than pivot in the left part and swap
        while (i < j && arr[i] <= pivot)
        {
            i++;
        }
        if (i < j)
        {
            arr[j] = arr[i];
        }
    }
    // Two pointers meet at the correct position of pivot
    arr[i] = pivot;

    QuickSort(arr, begin, i - 1);
    QuickSort(arr, i + 1, end);
}
