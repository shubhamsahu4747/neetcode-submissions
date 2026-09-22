class Solution {
public:
    bool isPalindrome(string s) {
        string reverse= "";
        for(char c:s){
            if(isalnum(c)){
                reverse += tolower(c);
            }
        }
        return reverse == string(reverse.rbegin(),reverse.rend());
    }
};
