class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) { 
        int n=nums.size();
        int l=0,h=k-1,res=INT_MAX,sum=0;
        sort(nums.begin(),nums.end());
        for(int i=l;i<h;i++){
            sum=nums[h]-nums[l];
        }
        res=min(res,sum);
        while(h+1<n){
            l++;
            h++;
            for(int i=l;i<h;i++){
            sum=nums[h]-nums[l];
             res=min(res,sum);
            }

        }
        return res;
    }
};