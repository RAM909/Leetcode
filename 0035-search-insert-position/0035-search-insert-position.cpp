class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i =0;
            while(i<nums.size()){
                if(nums[i]== target)  return i;
                else if(nums[i]< target){
                    i++;
                }
                else return i;
                   
                
            }
        return i;
        
    }
};