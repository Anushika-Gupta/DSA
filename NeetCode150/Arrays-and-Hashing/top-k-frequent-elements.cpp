class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int num : nums){
            mpp[num]++;
        }
        vector<vector<int>> bucket(nums.size()+1); //Bucket Sort
            for(auto it: mpp){
                bucket[it.second].push_back(it.first);
            }
        vector<int> result;
        for(int i=bucket.size()-1;i>=0 && result.size()<k;i--){
            for(int num:bucket[i]){
                result.push_back(num);
                if(result.size()==k) break;
            }
        }
        return result;
    }
};
//Time Complexity: O(n)
//Space Complexity: O(n)
