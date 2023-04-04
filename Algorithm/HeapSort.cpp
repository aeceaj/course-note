#include <vector>
#include <utility>

using namespace std;

/************ Heap sort ************
 * Time complexity          O(nlogn)
 * Space complexity         O(1)
 * Stable                   No
 */

/**
 * @brief Make the subtree obey max-heap property.
 * @param arr Target array with a temp value at index 0.
 * @param k Index of the subtree's root.
 * @param end End index of the subtree (inclusive).
 */
void MaxHeapify(vector<int> &arr, int k, int end)
{
    arr[0] = arr[k];

    int i = 2 * k;
    while (i <= end)
    {
        if (i < end && arr[i + 1] > arr[i])
        {
            // Child with greater value
            i++;
        }
        if (arr[i] > arr[0])
        {
            // Swap the child to its parent
            arr[k] = arr[i];
            k = i;
        }
        else
        {
            // Exit when both two children are not greater than parent
            break;
        }
        i *= 2;
    }
    arr[k] = arr[0];
}

/**
 * @brief Build a max-heap from an unordered array.
 * @param arr Target array with a temp value at index 0.
 */
void BuildMaxHeap(vector<int> &arr)
{
    int n = arr.size() - 1;

    for (int i = n / 2; i > 0; i--)
    {
        MaxHeapify(arr, i, n);
    }
}

void MaxHeapSort(vector<int> &arr)
{
    int n = arr.size();
    arr.insert(arr.begin(), 0); // Temp

    BuildMaxHeap(arr);
    for (int i = n; i > 1; i--)
    {
        swap(arr[1], arr[i]);
        MaxHeapify(arr, 1, i - 1);
    }

    arr.erase(arr.begin());
}
