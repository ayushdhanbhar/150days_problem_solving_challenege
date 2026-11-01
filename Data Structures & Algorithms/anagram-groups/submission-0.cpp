class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>result;
    unordered_map<string,vector<string>>mp;
    for(string x:strs){
        string word = x;
        sort(word.begin(),word.end());
        mp[word].push_back(x);
    }

    for(auto it:mp){
        result.push_back(it.second);
    }
    return result;
    }
};
