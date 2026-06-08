class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int result = 0, current = nums[0], streak = 0, i = 0;
        while(i < nums.size()){
            if (current != nums[i]){
                current = nums[i];
                streak = 0;
            }

            while (i < nums.size() && nums[i] == current){
                i++;
            }
            streak++;
            current++;
            result = max(result, streak);
        }
        return result;

    }
};
