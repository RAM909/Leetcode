class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        int uniqueCount = 0; 

        for (int i = 0; i < nums.size(); i++) {
            if (seen.find(nums[i]) == seen.end()) {
                seen.insert(nums[i]);
                nums[uniqueCount++] = nums[i];
            }
        }

        // Resize nums to keep only unique elements
        nums.resize(uniqueCount);

        return uniqueCount;
    }
};