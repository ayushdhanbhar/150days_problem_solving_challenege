class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    int longest = 0;
    int cnt;
    unordered_set<int>st(nums.begin(),nums.end());
    for(auto x:nums){
        if(!st.count(x-1)){
            int curr = x;
            cnt = 1;
            while(st.count(curr+1)){
                curr++;
                cnt++;
            }
        }
        longest = max(longest,cnt);
    }
    return longest; 
    }
};
