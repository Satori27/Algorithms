#include <set>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        for(int i=0; i<nums.size(); ++i){
            vec.push_back(nums[i]);
        }
        vector<int> ans;
        set<int> st;
        for(int i=0; i<vec.size(); ++i){
            st.insert(vec[i]);
            if (st.count(target-vec[i])){
                for(int j=0; j<i; ++j){
                    if(target - vec[i]==vec[j]){
                        ans.push_back(i);
                        ans.push_back(j);
                        return ans;
                    }
                }
            }
        }
        return ans;
    }

};