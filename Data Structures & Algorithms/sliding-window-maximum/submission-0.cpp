class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;

        for (int l = 0; l <= nums.size() - k; l++){
            int maxi = nums[l];
            for (int i = l; i < l+k; i++){
                maxi = max(maxi, nums[i]);
            }

            result.push_back(maxi);
        }

        return result;
    }
};
