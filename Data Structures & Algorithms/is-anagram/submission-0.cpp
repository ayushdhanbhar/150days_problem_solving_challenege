class Solution {
public:
    bool isAnagram(string s, string t) {
    int n = s.size();
    int m = t.size();
    int cnt[26]={0};
    if(n!=m) return false;
    for(char ch:s)cnt[ch-'a']++;
    for(char ch:t)cnt[ch-'a']--;
    for(auto it:cnt){
        if(it!=0) return false;
    }
    return true;
    }
};
