#include <vector>
#include <map>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> retVec;
    map<int, int> orderedNumbers;
    map<int, int>::iterator iter;

    for (int i = 0; i < numbers.size(); ++i)
    {
        iter = orderedNumbers.find(target - numbers[i]);
        if ( iter != orderedNumbers.end())
        {
            retVec.push_back(iter->second);
            retVec.push_back(i + 1);
            break;
        }

        orderedNumbers[numbers[i]] = i + 1;
    }

    return retVec;
}