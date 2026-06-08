class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size()-1; i++){
            int diff = target - numbers[i];
            for (int j = i+1; j < numbers.size(); j++){
                if (numbers[j] == diff){
                    return { i + 1, j + 1 };
                }
            }
        }
        return {};
    }
};
