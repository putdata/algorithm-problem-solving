class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        priority_queue<pair<int, int>> pq;
        int ans = 0;
        for (auto v : intervals) {
            while (!pq.empty()) {
                auto [y, x] = pq.top();
                if (y <= v[0]) {
                    pq.pop();
                    continue;
                }
                break;
            }
            if (pq.empty()) {
                pq.push({v[1], v[0]});
                continue;
            }
            auto [y, x] = pq.top();
            ans++;
            if (y > v[1]) {
                pq.pop();
                pq.push({v[1], v[0]});
            }
        }
        return ans;
    }
};