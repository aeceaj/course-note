#include <string>
#include <vector>

using namespace std;

/****** Brute force algorithm ******
 * Main string's length        n
 * Substring pattern's length  m
 * Time complexity             O(mn)
 */

/**
 * @brief Brute force algorithm for string pattern matching.
 * @param s Main string.
 * @param p Substring pattern.
 * @return Index of the first matched substring (1-indexed); 0 if not found.
 */
int IndexBF(string s, string p)
{
    int i = 0, j = 0;
    while (i < s.length() && j < p.length())
    {
        if (s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            // Substring right shift by 1
            i = i - j + 1;
            j = 0;
        }
    }
    if (j == p.length())
    {
        return i - j + 1; // Returns the index starting at 1
    }
    return 0;
}

/*********** KMP algorithm **********
 * Main string's length        n
 * Substring pattern's length  m
 * Time complexity             O(m+n)
 */

/**
 * @brief Find the same prefix and suffix in one string.
 * @param s Target string.
 * @return Length of the longest matched prefix and suffix.
 */
int MaxPreSufMatch(string s)
{
    int n = s.length();
    for (int i = n - 1; i > 0; i--)
    {
        string prefix = s.substr(0, i);
        string suffix = s.substr(n - i, i);
        if (prefix == suffix)
        {
            return i;
        }
    }
    return 0;
}

/**
 * @brief Based on partial match. Shows the next index of substring pointer when a char is mismatched.
 * @param s Substring pattern in KMP algorithm.
 * @return Next array, the first number is -1.
 */
vector<int> NextArr(string s)
{
    int n = s.length();
    vector<int> v;
    v.push_back(-1);
    for (int i = 1; i < n; i++)
    {
        // Mismatch at index i
        // Find the longest matched length of prefix at index 0 to i - 1
        int maxMatch = MaxPreSufMatch(s.substr(0, i));
        v.push_back(maxMatch);
    }
    return v;
}

/**
 * @brief Modified NextArr.
 * @param s Substring pattern in KMP algorithm.
 * @return Modified next array, the first number is -1.
 */
vector<int> NextArrModified(string s)
{
    int n = s.length();
    vector<int> v;
    v.push_back(-1);
    for (int i = 1; i < n; i++)
    {
        int maxMatch = MaxPreSufMatch(s.substr(0, i));
        v.push_back(maxMatch);
        // If the next char is the same as the current one (which fails to match), it will fail as well
        // Find the next char recursively until they are different
        while (v[i] >= 0 && s[v[i]] == s[i])
        {
            v[i] = v[v[i]];
        }
    }
    return v;
}

/**
 * @brief KMP algorithm of string pattern matching.
 * @param s Main string.
 * @param p Substring pattern.
 * @return Index of the first matched substring (1-indexed); 0 if not found.
 */
int IndexKMP(string s, string p)
{
    int i = 0, j = 0;
    vector<int> next = NextArrModified(p);
    int slen = s.length(), plen = p.length();
    // NOTE string.length() is an unsigned value, it causes problem when compared with a minus number
    while (i < slen && j < plen)
    {
        if (j == -1 || s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            // Only the substring pointer moves
            j = next[j];
        }
    }
    if (j == p.length())
    {
        return i - j + 1; // Returns the index starting at 1
    }
    return 0;
}
