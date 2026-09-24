class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();       
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left=i+1,right=n-1;
        while(left < right){    
            int sum = nums[i] + nums[left] + nums[right];
            if(sum > 0){
                right--;
            }
            if(sum < 0){
                left++;
            }
            if(sum ==0){
                res.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
               while(left < right && nums[left] == nums[left-1]){
                left++;
               } 
            }
        }
        } 
        return res;
    }
};
