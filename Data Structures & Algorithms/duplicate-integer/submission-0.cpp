class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int limit = nums.size();
        for (auto num:nums){
            mp[num]++;
        }
        int target = mp.size();
        if (target < limit){
            return true;
        }
        return false;
    }
};