#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int l = nums.size();
        if(l == 1)
            return 0;
        int right = nums[0], index = 0;
        int step = 1;
        while(right < l - 1)
        {
            int next_right = right;
            while(index <= right)
            {
                if(index + nums[index] > next_right)
                {
                    next_right = index + nums[index];
                }
                ++index;
            }
            right = next_right;
            ++step;
        }
        return step;
    }
};