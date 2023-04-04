#include <vector>

using namespace std;

/************ Merge sort ***********
 * Time complexity          O(nlogn)
 * Space complexity         O(n)
 * Stable                   Yes
 */

/**
 * @brief Merge sort recursively.
 * @param arr Target array.
 * @param tmp Temp array of the same size with arr.
 * @param begin Begin index (inclusive).
 * @param end End index (inclusive).
 */
void MergeSort(vector<int> &arr, vector<int> &tmp, int begin, int end)
{
    if (begin >= end)
    {
        return;
    }

    // Divide the array in the middle and sort each part
    int mid = begin + (end - begin) / 2;
    MergeSort(arr, tmp, begin, mid);
    MergeSort(arr, tmp, mid + 1, end);

    // Merge two parts
    int i = begin, j = mid + 1;
    int p = begin;
    while (i <= mid && j <= end)
    {
        tmp[p++] = arr[i] > arr[j] ? arr[j++] : arr[i++];
    }
    while (i <= mid)
    {
        tmp[p++] = arr[i++];
    }
    while (j <= end)
    {
        tmp[p++] = arr[j++];
    }
    for (p = begin; p <= end; p++)
    {
        arr[p] = tmp[p];
    }
}
