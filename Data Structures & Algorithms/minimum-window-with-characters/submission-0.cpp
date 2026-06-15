class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        vector<int> need(128, 0); // 記錄 t 中字元需求
        for (char c : t) need[c]++;

        int required = t.length(); // 還需要匹配的字元總數
        int left = 0, right = 0;
        int minLen = INT_MAX, start = -1;
        vector<int> window(128, 0);

        while (right < s.length()) {
            char c = s[right];
            // 如果此字元是 t 所需的，則減少剩餘需求
            if (need[c] > 0) {
                required--;
            }
            // 不論是否在 t 中，都更新視窗計數
            need[c]--; 
            right++;

            // 當視窗已經包含所有 t 中的字元
            while (required == 0) {
                // 更新最小長度
                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }

                // 準備縮小視窗
                char leftChar = s[left];
                need[leftChar]++; // 移除該字元，需更新需求表
                if (need[leftChar] > 0) {
                    required++; // 如果移除的字元是 t 中必要的，則不再滿足條件
                }
                left++;
            }
        }

        return (start == -1) ? "" : s.substr(start, minLen); 
    }
};
