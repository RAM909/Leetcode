class Solution {
public:
    int MIN(int a,int b){
        if(a<b) return a;
            else return b;
    }
    
    int MAX(int a,int b){
        if(a>b) return a;
        else return b;
    }
    int maxArea(vector<int>& height) {
         int maximum = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int h = min(height[left], height[right]);
            int l = right - left;
            int area = h * l;
            maximum = max(maximum, area);

            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maximum;
    }
};