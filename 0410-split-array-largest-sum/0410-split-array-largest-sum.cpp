class Solution {
public:
    int sum_of(vector<int>& nums, int mid){
        int cnt=1,split=0;
        for(int i=0;i<nums.size();i++){
            if(split+nums[i]<=mid){
                split += nums[i];
            }
            else
            {
                cnt +=1;
                split = nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h= accumulate(nums.begin(), nums.end(), 0);
        while(l<=h){
            int mid=(l+h)/2;
            int no_of_split=sum_of(nums,mid);
            if (no_of_split > k) l=mid+1;
            else h=mid-1;
            
        }
       return l;
    }
};