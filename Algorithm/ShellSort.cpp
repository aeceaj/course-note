#include <vector>

using namespace std;

/************ Shell sort ***********
 * Average time complexity  O(n^1.3)
 * Best                     O(n)
 * Worst                    O(n^2)
 * Space complexity         O(1)
 * Stable                   No
 */

void ShellSort(vector<int> &arr)
{
    int n = arr.size();
    arr.insert(arr.begin(), 0); // Temp

    for (int d = n / 2; d >= 1; d /= 2) // Shell's increments sequence
    {
        // Divide the array into d groups
        // Straight insertion sort within each group
        for (int i = d + 1; i <= n; i++)
        {
            if (arr[i] < arr[i - d])
            {
                arr[0] = arr[i];
                int j;
                for (j = i - d; j > 0 && arr[0] < arr[j]; j -= d)
                {
                    arr[j + d] = arr[j];
                }
                arr[j + d] = arr[0];
            }
        }
    }

    arr.erase(arr.begin());
}
