class Solution {
public:
    int characterReplacement(string s, int k) {
    int l =0,maxfreq=0,maxlen =0;
    unordered_map<char,int>count;
    for(int r=0;r<s.length();r++){
    count[s[r]]++;
    maxfreq = max(maxfreq,count[s[r]]);

    while((r-l+1) - maxfreq> k){
    count[s[l]]--;
    l++;
    }
    maxlen = max(maxlen,r-l+1);
    }
    return maxlen;
    }
};
