class Solution {
public:
    int characterReplacement(string s, int k) {
         int n = s.size();
         int res =0;
         unordered_map<char ,int>count;
         int maxf=0;
         int l=0;
         for(int r=0;r<n;r++){
            count[s[r]]++;
            maxf= max(maxf,count[s[r]]);
            while((r-l+1)-maxf >k){
                count[s[l]]--;
                l++;
            }
            res = max(res,r-l+1);

         }
            
        return res;
    }
};
