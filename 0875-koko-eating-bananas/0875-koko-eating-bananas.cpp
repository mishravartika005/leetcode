
class Solution {
public:
    long long time(vector<int>& piles, int mid) {
        long long total = 0;

        for (int i = 0; i < piles.size(); i++) {
            total += (piles[i] + (long long)mid - 1) / mid;
        }

        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (l <= high) {
            int mid = l + (high - l) / 2;
            long long total_hrs = time(piles, mid);

            if (total_hrs <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
