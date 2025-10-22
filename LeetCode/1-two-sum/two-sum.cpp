class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ansr;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                int sum = nums[i] + nums[j];
                if(i!=j){
                    if(sum == target && ansr.size() < 2){
                        ansr.push_back(i);
                        ansr.push_back(j);
                    }
                }
            }
        }
        return ansr;
    }
};