class Solution {
public:
    int countGoodSubstrings(string s) {
      int n=s.size();
      int k=3,res=0;
      unordered_map<char,int>mpp;
      int l=0,h=k-1;
      for(int i=l;i<=h;i++){
        mpp[s[i]]++;
      }      
      if(mpp.size() == k)
        res++;
        
      while(h+1<n){
        mpp[s[l]]--;
        if(mpp[s[l]] == 0) mpp.erase(s[l]);
         l++,h++;
         mpp[s[h]]++;
        if(mpp.size() == k)
        res++;
         
      }
      return res;
    }
};