#include <string>
#include <algorithm>

class Solution
{
public:
    bool isAnagram(std::string s, std::string t)
    {
        std::string sortS = s;
        std::string sortT = t;
        std::sort(sortS.begin(), sortS.end());
        std::sort(sortT.begin(), sortT.end());
        if (sortS == sortT)
        {
            return true;
        }
        return false;
    }
};
