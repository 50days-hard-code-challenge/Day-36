class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> phoneMap = {
            "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> result;
        string current;
        backtrack(digits, 0, phoneMap, current, result);
        return result;
    }
private:
    void backtrack(const string& digits, int index, const vector<string>& phoneMap, string& current, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        int digit = digits[index] - '2';
        for (char letter : phoneMap[digit]) {
            current.push_back(letter);
            backtrack(digits, index + 1, phoneMap, current, result);
            current.pop_back();
        }
    }
};
