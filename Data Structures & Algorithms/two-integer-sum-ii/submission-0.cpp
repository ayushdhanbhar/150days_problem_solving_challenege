class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();
    int seen = 0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
    seen = target - numbers[i];
    if(mp.find(seen)!=mp.end()){
        return {mp[seen] + 1,i+1};
    }
    mp[numbers[i]] = i;
    }
    return {};
    }
};
