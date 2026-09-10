class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int i = 0;
        // while(i < nums.size()){
        //     if(nums[i] != i) return i;
        //     i++;
        // }
        // return nums.size();    // time complexity - o(n log n)

        int n = nums.size();
        int sum = 0;
        int i = 0;
        while(i<n){
            sum += nums[i];
            i++;
        }
        int total = n*(n+1)/2;
        return total - sum;   // time complexity - o(n)
    }
};
