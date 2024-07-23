class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        
        int j=0;
        int f=0;
        int c=0;
        
        for(int i=0;i<n;i++){
            f = max(f,i+nums[i]);
            if(i==c){
                j++;
                c=f;
                if(c>=n-1) break;
            }
        }
        return j;
        
    }
};