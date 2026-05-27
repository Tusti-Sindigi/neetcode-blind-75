#include<iostream>
#include<vector>
using std::vector;
#include<algorithm>
#include<unordered_set>
using std::unordered_set;

class Solution {
public:

    bool containsDuplicate(vector<int>& nums)
    {
        unordered_set<int> v;

        for(int num : nums)
        {
            if(v.count(num))
                return true;
            v.insert(num);
        }
        return false;
    }
};