class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,int>mpp;
        for (int i = 0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin() , s.end());
            if (mpp.find(s) == mpp.end()){
                mpp[s] = res.size(); // starts with zero
                res.push_back({});//push an enpty vector -->size increases to 1
            }
            res[mpp[s]].push_back(strs[i]);
        }
        return res;
    }
};
