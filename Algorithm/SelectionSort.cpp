#include <vector>
#include <utility>

using namespace std;

/********* Selection sort ********
 * Time complexity          O(n^2)
 * Space complexity         O(1)
 * Stable                   No
 */

void SimpleSelectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
}
