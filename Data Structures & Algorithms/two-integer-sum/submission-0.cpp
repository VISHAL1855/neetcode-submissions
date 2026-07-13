class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (int i=0; i < nums.size();i++){
            int expected = target - nums[i];
            if (mp.find(expected) != mp.end()){
                return {mp[expected],i};
            }
            mp[nums[i]]=i;

        }
    }
};
