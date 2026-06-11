class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size()-1;
        int max_area = INT_MIN;
        while (left < right) {
            int area = (right - left) * min(heights[left], heights[right]);
            max_area = max(max_area, area);
            if (heights[left] < heights[right]){
                left++;
            }else{
                right--;
            }
        }

        return max_area;
    }
};
