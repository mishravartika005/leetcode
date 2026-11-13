class Solution {
public:
    int n, count;
    vector<int> nums;
    int target;

    int rec(int index, int sum) {
        if(index == n) {
            if(sum == target)
                count++;
            return 0;
        }

        rec(index + 1, sum + nums[index]);
        rec(index + 1, sum - nums[index]);

        return 0;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        n = nums.size();
        this->nums = nums;
        this->target = target;
        count = 0;

        rec(0, 0);
        return count;
    }
};