class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> s_set;
        unordered_map<char, int> t_set;
        for (int i = 0; i < s.length(); i++){
            s_set[s[i]]++;
            t_set[t[i]]++;
        }
        return s_set == t_set;
    }
};
