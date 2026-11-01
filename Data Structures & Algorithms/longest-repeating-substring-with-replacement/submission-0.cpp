class Solution {
public:
    int characterReplacement(string s, int k) {
    int maxfreq=0,l=0,maxlen=0;
    int n = s.length();
    int hash[26]={};
    for(int r=0;r<n;r++){
        hash[s[r]-'A']++;
        maxfreq = max(maxfreq,hash[s[r]-'A']);

        while((r-l+1) - maxfreq > k){
            hash[s[l]-'A']--;
            l++;
        }
    //updated window 
    maxlen = max(maxlen,r-l+1);
    }
    return maxlen;
    }
};
