class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int res =0,l=0,r=n-1;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //       int minVal =min(heights[i],heights[j]);
        //       res = max(res,minVal*(j-i));
        //     }
        // }

        while(l<r){
            int area= min(heights[l],heights[r])*(r-l);
            if(heights[l]<=heights[r]){
                l++;
            }else{
                r--;
            }

            res =max(res,area);
        }


        return res;
    }
};
