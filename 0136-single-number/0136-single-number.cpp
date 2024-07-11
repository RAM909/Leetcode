class Solution {
public:
    int singleNumber(vector<int>& nums) {
         unordered_map<int, int> countMap;
        
        // Count the occurrences of each number
        for (int num : nums) {
            countMap[num]++;
        }
        
        // Find the number that occurs only once
        for (int num : nums) {
            if (countMap[num] == 1) {
                return num;
            }
        }
        
        // Return -1 if no such number is found (though the problem guarantees one exists)
        return -1;
    }
};