class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet;
        for (const auto& ele : nums){
            if (hashSet.find(ele) != hashSet.end()) return true;
            else{hashSet.insert(ele);}
        }
        return false;
    }
};