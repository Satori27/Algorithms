class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        while(head){
            vec.push_back(head->val);
            head = head->next;
        }
        int mid = vec.size()/2 + 1;
        int l = 0; 
        int r = vec.size()-1;
        if(vec[l]!=vec[r]){return false;}
        while(l != mid){
            if(vec[l]!=vec[r]){return false;}
            ++l; --r;
        }
        return true;
    }
};