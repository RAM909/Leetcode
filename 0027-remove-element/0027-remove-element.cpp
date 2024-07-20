class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newSize = 0;
        
        // Iterate through the array and move non-val elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[newSize++] = nums[i];
            }
        }
        
        // Return the new size of the array
        return newSize;
    }
};