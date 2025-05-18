class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length()-1;
        while(l<r){
            while(l<r && !alphanum(s[l])){
                l++;
            }
            while(r>l && !alphanum(s[r])){
                r--;
            }
            if(tolower(s[l])!=tolower(s[r])){
                return false;
            }
            l++; r--;
        }
        return true;
        
    }
    bool alphanum(char c){
        return(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c<='9');
    }
};
//Time Complexity: O(n)
//Space Complexity: O(1)
