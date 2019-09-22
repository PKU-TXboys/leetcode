class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, ret_value = nums.size();
        if (ret_value == 0)
            return 0;
        int r = ret_value - 1;
        while(l < r){
            while(nums[l] != val && l < r)
                ++l;
            while(nums[r] == val && l < r){
                --ret_value;
                --r;
            }
            if(l < r){
                nums[l++] = nums[r--];
                --ret_value;
            }
        }
        if (l == r && nums[l] == val){
            --ret_value;
        }
        return ret_value;
    }
};