class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> myStack;
        unordered_map<char ,char>closeToOpen ={
            {')','('},
            {']','['},
            {'}','{'},
        };
        for(char c:s){
            if(closeToOpen[c]){
                if(!myStack.empty() && myStack.top() == closeToOpen[c]){
                    myStack.pop();
                }else{
                    return false;
                }
            }else{
                myStack.push(c);
            }
        }
        return myStack.empty();
    }
};
