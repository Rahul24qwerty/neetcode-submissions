class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char,int>hashMap_s;
        map<char,int>hashMap_t;
        for (int i = 0;i<s.size();i++){
            if (hashMap_s.find(s[i]) != hashMap_s.end()){
                hashMap_s[s[i]]++;
            }
            else{
                hashMap_s[s[i]] = 1;
            }

            if (hashMap_t.find(t[i]) != hashMap_t.end()){
                hashMap_t[t[i]]++;
            }
            else{
                hashMap_t[t[i]] = 1;
            }
            
        }

        for (auto& [key,val] : hashMap_s){
            if (hashMap_t[key] != val) return false;
        }
        return true;
        
    }
};
