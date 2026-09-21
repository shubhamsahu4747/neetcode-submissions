class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        int zero_count =0;
        int prod =1;

        for(int num :nums){
            if(num==0){
                zero_count++;
            }else{
                prod*=num;
            }

        }
        
        if(zero_count >1){
            return vector<int>(n,0);   
        }

        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(zero_count>0){
                res[i]=(nums[i]==0)?prod:0;
            }else{
                res[i] =prod/nums[i];
            }
        }

        return res;  
    }
};
