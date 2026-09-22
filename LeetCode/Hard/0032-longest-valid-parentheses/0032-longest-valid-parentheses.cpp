class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        vector<pair<int, int>> vec;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                if (st.empty()) continue;
                st.pop();
            }
        }
        while (!st.empty()) {
            s[st.top()] = '-';
            st.pop();
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (st.empty()) continue;
                if (st.size() == 1) vec.push_back({st.top(), i});
                st.pop();
            }
        }
        if (vec.size() == 0) return 0;
        int ans = vec[0].second - vec[0].first + 1;
        for (int i = 1; i < vec.size(); i++) {
            auto [x, y] = vec[i - 1];
            auto [xx, yy] = vec[i];
            ans = max(ans, yy - xx + 1);
            if (xx - y == 1) {
                ans = max(ans, yy - x + 1);
                vec[i] = {x, yy};
            }
        }
        return ans;
    }
};