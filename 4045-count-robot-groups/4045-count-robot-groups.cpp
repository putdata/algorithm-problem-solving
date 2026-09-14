class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int size = position.size();
        int merged = 0;
        for (int i = size - 1; i >= 1; i--) {
            if (position[i - 1] + distance >= position[i] || speed[i - 1] > speed[i]) {
                speed[i - 1] = speed[i];
                merged++;
            }
        }
        return size - merged;
    }
};