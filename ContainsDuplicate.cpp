#include <vector>
#include <set>

class Solution
{
public:
    bool hasDuplicate(std::vector<int> &nums)
    {
        std::set<int> noDupes;
        noDupes.insert(nums.begin(), nums.end());
        if (noDupes.size() != nums.size())
        {
            return true;
        }
        return false;
    }
};