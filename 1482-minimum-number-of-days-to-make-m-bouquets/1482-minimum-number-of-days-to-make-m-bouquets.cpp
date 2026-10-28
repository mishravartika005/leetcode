
class Solution {
public:
    bool possible(vector<int>& bloomDay, int mid, int m, int k) {
        int cnt = 0, bloom = 0;

        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                cnt++;
            } else {
                bloom += cnt / k;
                cnt = 0;
            }
        }

        bloom += cnt / k;

        return bloom >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
            return -1;

        int ans = -1;
        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int h = *max_element(bloomDay.begin(), bloomDay.end());

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (possible(bloomDay, mid, m, k)) {
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
