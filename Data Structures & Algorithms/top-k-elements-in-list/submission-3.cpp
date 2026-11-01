class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    priority_queue<pair<int,int>>pq;
    unordered_map<int,int>mp;
    for(int x:nums){
        mp[x]++;
    }
    for(auto it:mp){
        pq.push({it.second,it.first});
    }
    pair<int,int>el;
    vector<int>ans;
    while(k-- > 0){
    el = pq.top();
    pq.pop();
    ans.push_back(el.second);
    }
    return  ans;
    }
};
