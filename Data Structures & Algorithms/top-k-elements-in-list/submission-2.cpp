class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    //we can solve this problem using 2 methods.
    //1. standard using map , pairs 
    //2. priority_queue it is standard priority_queue problem where we can use the max priority so that we can find out max element.
    unordered_map<int,int>mp;
    vector<pair<int,int>>v;
    vector<int>st;
    for(int x:nums){
        mp[x]++;
    }
    for(auto it:mp){
        v.push_back({it.first,it.second});
    }
    sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b){
    return a.second>b.second;
    });

    for(int i=0;i<k;i++){
    st.push_back(v[i].first);  
    }    
    return st;
    }
};
