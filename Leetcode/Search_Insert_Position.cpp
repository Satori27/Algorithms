class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int size = nums.size()-1;
        int m;
        while (l<=size){
            m = (size+l)/2;
            if(nums[m] < target){
                l = m+1;
            }
            else if(nums[m]==target){return m;}
            else{
                size = m-1;
            }
        }
        return l;
    }
};