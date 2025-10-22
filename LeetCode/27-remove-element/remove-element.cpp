class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> final;
        int k = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != val){
                final.push_back(nums[i]);
                k++;
            }
        }

        for(int i = 0; i<k; i++){
            nums[i] = final[i];
        }
        return k;
    }
};