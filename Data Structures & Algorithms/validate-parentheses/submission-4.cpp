class Solution {
public:
    bool isValid(string s) {
        vector<char> valid;

        for (char c : s){
            if (c == '(' || c == '[' || c == '{'){
                valid.push_back(c);
            }else{
                if (valid.empty()) return false;

                char b = valid.back();
                if (c == ')' && b =='('){
                    valid.pop_back();
                }else if (c == ']' && b =='['){
                    valid.pop_back();
                }else if (c == '}' && b =='{'){
                    valid.pop_back();
                }else{
                    return false;
                }
            }
        }
        if (valid.empty()){
            return true;
        }else{
            return false;
        }
    }
};
