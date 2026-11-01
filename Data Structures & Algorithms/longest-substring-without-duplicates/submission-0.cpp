class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int l = 0;
    int maxiarea = 0;
    unordered_set<int>st;
    for(int r=0;r<n;r++){
        while(st.find(s[r])!=st.end()){
            st.erase(s[l]);
            l++;
        }
        maxiarea = max(maxiarea,r-l+1);
        st.insert(s[r]);
    }
    return maxiarea;  
    }
};
