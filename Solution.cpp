class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s;
        for (int& x : nums) {
            s.insert(x);
        }
        while (s.find(original) != s.end()) {
            original *= 2;
        }
        return original;
    }
};
