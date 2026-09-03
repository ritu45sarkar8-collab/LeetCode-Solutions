class Solution {
public:
    void reverse(vector<int>& num, int i, int j){
        while(i<j){
            swap(num[i],num[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& num, int k) {
        int n = num.size();
        k = k % n;

        reverse(num, 0, n-k-1);
        reverse(num, 0, k-1);
        reverse(num, k, n-1);

        // reverse(num,0,n-1);
        // reverse(num,0,k-1);
        // reverse(num,k,n-1);

    }
}; 
