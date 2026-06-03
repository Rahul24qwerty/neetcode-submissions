class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int>hashMap_s;
        unordered_map<char,int>hashMap_t;
        for (int i = 0;i<s.size();i++){
            hashMap_s[s[i]]++;
            hashMap_t[t[i]]++;
            
        }

        for (const auto& [key,value] : hashMap_s){
            if (hashMap_t[key] != value) return false; 
        }
        return true;
    }
};
