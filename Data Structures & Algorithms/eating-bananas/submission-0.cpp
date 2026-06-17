class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k = 1;
        while (true){
            long long totaltime = 0;
            for (auto& pile : piles){
                totaltime += (pile + k - 1) / k;
            }
            if (totaltime <= h){
                return k;
            }
            k++;
        }

    }
};
