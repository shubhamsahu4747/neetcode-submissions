class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++) {
            arr[i] = {nums[i], i};
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                int i = arr[left].second;
                int j = arr[right].second;

                return {min(i, j), max(i, j)};
            }

            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {};
    }
};