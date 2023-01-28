class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int l,r;
      sort(nums.begin(), nums.end());
      vector<vector<int>> ans;
      for(int i=0; i<nums.size()-2; ++i){
          if(i==0 || nums[i] != nums[i-1]){
              l = i+1; r=nums.size()-1;
              while(l<r){
                  int res = nums[l]+nums[r]+nums[i];
                  if(res == 0){
                      ans.push_back({nums[i], nums[l], nums[r]});
                      while(l<r && nums[l]==nums[l+1])++l;
                      while(nums[r]==nums[r-1] && l<r)--r;
                      ++l;--r;
                  }
                  else if(res>0)--r;
                  else ++l;
              }
          }
      }
      return ans;
    }
};