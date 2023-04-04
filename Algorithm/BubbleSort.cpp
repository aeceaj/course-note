#include <vector>
#include <utility>

using namespace std;

/********** Bubble sort **********
 * Average time complexity  O(n^2)
 * Best                     O(n)
 * Worst                    O(n^2)
 * Space complexity         O(1)
 * Stable                   Yes
 */

void BubbleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                flag = true;
            }
        }
        // Exit when no swap occurs
        if (!flag)
        {
            return;
        }
    }
}
