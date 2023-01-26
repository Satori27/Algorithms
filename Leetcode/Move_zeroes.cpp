class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int g = 0;
        for(vector<int>::iterator i = nums.begin(); i != nums.end()&& g<nums.size(); ++g){
            if(*i != 0){++i;}
            else {nums.erase(i); nums.push_back(0);};
        }
    }
};