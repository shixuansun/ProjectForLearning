#include <map>
#include <string>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    map<char, int> existedCharcter;
    map<char, int>::iterator iter;
    int begin = 0;
    int cur = 0;
    int maxLength = 0;

    while (cur < s.length())
    {
        iter = existedCharcter.find(s[cur]);

        if (iter != existedCharcter.end() && iter->second >= begin)
        {
            begin = iter->second + 1;
        }

        existedCharcter[s[cur]] = cur++;

        int length = cur - begin;
        if (length > maxLength)
        {
            maxLength = length;
        }
    }

    return maxLength;
}