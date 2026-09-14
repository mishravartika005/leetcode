class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int max=INT_MIN;
        int count=0;
        for(auto i: mpp){
          if(i.second > max){
            max=i.second;
          }

        }
         for(auto i: mpp){
          if(i.second == max){
             count += i.second;
          }

        }
       return count;
    }
};