class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp; // num -> index
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(mpp.find(complement) != mpp.end()){
                return {mpp[complement], i};
            }
            mpp[nums[i]] = i;
        }
    }
};
//Time Complexity: O(n)
//Space Complexity: O(n)
