class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;  // Handle the empty array case
        
        int i = 0;  // Index to keep track of unique elements
        for (int j = 1; j < n; j++) {
            if (nums[i] != nums[j]) {
                i++;          // Move to the next unique position
                nums[i] = nums[j];  // Copy the unique element
            }
        }
        return i + 1;  // Return the length of the array with unique elements
    }
};