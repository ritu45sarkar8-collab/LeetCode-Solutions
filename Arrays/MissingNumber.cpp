class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        vector<bool> flag(n+1, false);
        for(int i=0; i<n; i++){
            flag[nums[i]] = true;
        }
        for(int i=0; i<=n; i++){
            if(flag[i] == false) return i;
        }
        return 0;
        // Tc = O(n), AS = O(n)


        // sort(nums.begin(), nums.end());
        // int i = 0;
        // while(i < nums.size()){
        //     if(nums[i] != i) return i;
        //     i++;
        // }
        // return nums.size();    // time complexity - o(n log n)

        // int n = nums.size();
        // int sum = 0;
        // int i = 0;
        // while(i<n){
        //     sum += nums[i];
        //     i++;
        // }
        // int total = n*(n+1)/2;
        // return total - sum;   // time complexity - o(n)
    }
}; 
