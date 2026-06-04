class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        vector<int> sizes;
        string encoded_string = "";
        for (string& s : strs){
            sizes.push_back(s.size());
        }
        for (int sz : sizes){
            encoded_string += to_string(sz) + ',';
        }
        encoded_string += '#';
        for (string& s : strs){
            encoded_string += s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<int> sizes;
        vector<string> decoded_strs;
        int i = 0;
        while (s[i] != '#') {
            string cur = "";
            while (s[i] != ',') {
                cur += s[i];
                i++;
            }
            sizes.push_back(stoi(cur));
            i++;
        }
        i++;
        for (int sz : sizes) {
            decoded_strs.push_back(s.substr(i, sz));
            i += sz;
        }
        return decoded_strs;
    }
};
