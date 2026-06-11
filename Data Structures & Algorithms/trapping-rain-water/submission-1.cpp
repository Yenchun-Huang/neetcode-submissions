class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n);
        vector<int> postfix(n);
        int premax = INT_MIN;
        for (int i = 0; i < n; i++){
            premax = max(premax, height[i]);
            prefix[i] = premax;
        }
        int postmax = INT_MIN;
        for (int i = n-1; i >= 0; i--){
            postmax = max(postmax, height[i]);
            postfix[i] = postmax;
        }
        int res = 0;
        for (int i = 0; i < n; i++){
            res += min(prefix[i], postfix[i]) - height[i];
        }
        
        return res;

    }
};
