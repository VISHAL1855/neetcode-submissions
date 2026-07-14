class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> final;
        for (string s:strs){
            string target ;
            target = s;
            sort(target.begin(),target.end());
            mp[target].push_back(s);
        }
        for(auto &[key,value]:mp){
            final.push_back(value);
        }
        return final;

        
    }
};
