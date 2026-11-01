class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int>result;
    vector<pair<int,int>>v;
    unordered_map<int,int>mp;
    for(int x:nums){
        mp[x]++;
    }
    for(auto x:mp){
        v.push_back({x.first,x.second});
    }
    sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
    });
    for(int i=0;i<k;i++){
        result.push_back(v[i].first);
    }
    return result;
    }
};
