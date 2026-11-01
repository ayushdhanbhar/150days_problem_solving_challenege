class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>>ans;
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
        int sum = nums[i]+nums[j]+nums[k];
        if(sum==0){
        vector<int>temp = {nums[i],nums[j],nums[k]};
        st.insert(temp);
        j++;k--;
        }else if(sum<0){
        j++;
        }else{
        k--;
        }
        }
    }
    for(auto it:st){
        ans.push_back(it);
    }
    return ans;
    }
};
