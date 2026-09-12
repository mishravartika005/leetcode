class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mpp;
        int l=0,h=0,k=2,res=0;
        for(int h=0;h<fruits.size();h++){
           mpp[fruits[h]]++;
           while(mpp.size() > k){
              mpp[fruits[l]]--;
               if(mpp[fruits[l]] == 0)
                  mpp.erase(fruits[l]);
                l++;
           }
           if(mpp.size() == k || mpp.size() < k)
            {
               int len= h-l+1;
                res = max(res,len);
            }
        }
        return res;
    }
};