class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> iVec(2,-1);
        int required;
        for(int i = 0;i<nums.size() ; i++){
            required = target - nums[i];
            if (mpp.find(required) != mpp.end()){
                if (i < mpp[required]){
                    iVec[0] = i;
                    iVec[1] = mpp[required];
                    break;
                }
                else{
                    iVec[0] = mpp[required];
                    iVec[1] = i;
                    break;
                }
            }
            else{
                mpp[nums[i]] = i;
            }
        }
        return iVec;
    }
};
