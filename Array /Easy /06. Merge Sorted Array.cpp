class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;    // Pointer for the last valid element in nums1
        int p2 = n - 1;    // Pointer for the last element in nums2
        int p = m + n - 1; // Pointer for the last position in nums1
        
        // Merge nums1 and nums2 starting from the end
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p--] = nums1[p1--];
            } else {
                nums1[p--] = nums2[p2--];
            }
        }
        
        // If there are remaining elements in nums2, copy them to nums1
        while (p2 >= 0) {
            nums1[p--] = nums2[p2--];
        }
    }
};
