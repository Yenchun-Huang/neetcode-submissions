class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> exist;
        for (int num : nums){
            if (exist.count(num)){
                return true;
            }
            exist.insert(num);
        }
        return false;
    }
};