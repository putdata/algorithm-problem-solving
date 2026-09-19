class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        if (n > m) {
            swap(nums1, nums2);
            swap(n, m);
        }
        const double INF = 1e9;
        int lo = 0, hi = n, half = (n + m + 1) / 2;
        int nL, nR, mL, mR;
        while (lo <= hi) {
            int i = (lo + hi) / 2, j = half - i;
            nL = i ? nums1[i - 1] : -INF; nR = i != n ? nums1[i] : INF;
            mL = j ? nums2[j - 1] : -INF; mR = j != m ? nums2[j] : INF;
            if (nL <= mR && mL <= nR) break;
            nL < mR ? lo = i + 1 : hi = i - 1;
        }
        if ((n + m) % 2 == 1) return max(nL, mL);
        return (max(nL, mL) + min(nR, mR)) / 2.0;
    }
};