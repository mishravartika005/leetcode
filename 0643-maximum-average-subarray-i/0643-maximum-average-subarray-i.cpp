class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int h=k-1,l=0;
        double avg=0,sum=0,maxi=INT_MIN;
         for(int i=l;i<=h;i++){
          sum = sum+nums[i];
          
         }
         avg = sum/k;
         h++;
         while(h<nums.size()){
            maxi= max(avg,maxi);
            sum = sum-nums[l];
            l++;
            sum=sum+nums[h];
            avg =sum/k;
            h++;
         }
         maxi= max(avg,maxi);
         return maxi;
    }
};