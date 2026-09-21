class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int res = 0,curr=nums[0],streak=0,i=0;
        while(i < nums.size()){
            if(curr!= nums[i]){
                curr=nums[i];
                streak=0;
            }
            while(i<nums.size() && nums[i]== curr){
                i++;
            }
            streak++;
            curr++;
            res =max(res,streak);
        }    
        return res;
    }
};
