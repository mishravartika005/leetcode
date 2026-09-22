class Solution {
public:
    string longestNiceSubstring(string s) {
        if (s.size() < 2)
            return "";

        unordered_set<char> st;

        for (char c : s)
            st.insert(c);

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            char opposite;

            if (c >= 'a' && c <= 'z')
                opposite = c - 32;
            else
                opposite = c + 32;

           
            if (st.find(opposite) == st.end()) {

                string left = longestNiceSubstring(s.substr(0, i));
                string right = longestNiceSubstring(s.substr(i + 1));

                if (left.size() >= right.size())
                    return left;
                else
                    return right;
            }
        }

       
        return s;
    }
};