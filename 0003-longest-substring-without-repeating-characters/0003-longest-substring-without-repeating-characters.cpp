class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int l=0,h=0,res=INT_MIN;
        if(s.size() == 0)  return 0;
        while(h<s.size()){
            mpp[s[h]]++;
            int k = h-l+1;
            while(mpp.size() < k){
                mpp[s[l]]--;
                if(mpp[s[l]] == 0)
                  mpp.erase(s[l]);
                l++;
               k = h-l+1;
            }
            int len=h-l+1;
            res=max(res,len);
            h++;
        }
        return res;
    }
};                       