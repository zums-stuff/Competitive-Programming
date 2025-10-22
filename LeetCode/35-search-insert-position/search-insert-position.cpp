class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int arns = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return arns;
    }
};