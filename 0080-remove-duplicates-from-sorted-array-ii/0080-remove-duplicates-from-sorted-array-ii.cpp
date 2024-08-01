class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        for(int i =1;i<n;i++){
            if(nums[i]==nums[i-1] ){
                if(count > 0){
                    nums.erase(nums.begin()+i);
                    i--;
                    n--;
                    
                }else{
                    count++;
                }
                
            }
            else{
                count = 0;
            }
        }
        return nums.size();
        
    }
};