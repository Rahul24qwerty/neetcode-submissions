class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char,int>hashMap_s;
        map<char,int>hashMap_t;
        for (int i = 0;i<s.size();i++){
            hashMap_s[s[i]]++;
            hashMap_t[t[i]]++;
            
        }

        for (auto& [key,val] : hashMap_s){
            if (hashMap_t[key] != val) return false;
        }
        return true;
        
    }
};
