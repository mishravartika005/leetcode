class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int i=0,j=numbers.size()-1;
        int sum=0;
        while(i<j){
        sum=numbers[i]+numbers[j];
        if(sum == target)
        return {i+1,j+1};
        if(sum < target)
        i++;
        else if (sum>target)
        j--;
        }
       
        return ans;
    }
};
    