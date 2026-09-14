class Solution {
public:

    int find(unordered_map<char,int>& f) {
        int c = 0;

        for(auto i : f) {
            c = max(c, i.second);
        }

        return c;
    }

    int characterReplacement(string s, int k) {

        unordered_map<char,int> f;

        int l = 0;
        int maxcount = 0;
        int res = 0;

        for(int h = 0; h < s.size(); h++) {

            f[s[h]]++;

            int len = h - l + 1;

            maxcount = find(f);

            int diff = len - maxcount;

            while(diff > k) {

                f[s[l]]--;
                l++;

                len = h - l + 1;

                maxcount = find(f);

                diff = len - maxcount;
            }

            res = max(res, len);
        }

        return res;
    }
};