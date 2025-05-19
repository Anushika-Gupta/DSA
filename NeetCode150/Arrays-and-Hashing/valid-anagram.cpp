class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;   
    }
};
//Time Complexity: O(n log n)
//Space Complexity: O(1)
