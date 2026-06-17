class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1;
        for (int pile : piles){
            r = max(r, pile);
        }
        int result = r;

        while (l <= r){
            int k = (l + r) / 2;
            long long totaltime = 0;
            for (int pile : piles){
                totaltime += ceil(static_cast<double>(pile) / k);
            }
            if (totaltime <= h){
                result = k;
                r = k - 1;
            }else{
                l = k + 1;
            }
        }
        return result;
    }
};
