class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int i=0;
    int j=1;
    while(j<n){
        if(nums[i]==nums[j]){
        return true;
        }
        i++;
        j++;
    }
    return false;
    }
};