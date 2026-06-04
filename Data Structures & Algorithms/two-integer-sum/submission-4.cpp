class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int required{};
        for (int i = 0;i<nums.size() ; i++){
            required = target - nums[i];
            if (mpp.find(required) != mpp.end()){
                if (i < mpp[required]) return {i,mpp[required]};
                else return {mpp[required],i};
            }
            else{
                mpp[nums[i]] = i;
            }
        }
        return {-1,-1};
    }
};
