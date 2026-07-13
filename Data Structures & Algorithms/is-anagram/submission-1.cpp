class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if (t.size() != s.size()){
            return false;
        }
        for (char c : s){
            mp[c]++;
        }

        for (char d : t){
            mp[d]--;

            if (mp[d] < 0 ){
                return false;
            }
        }
        return true;
        
    }
};
