class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s == " " or len(s)==1:
            return 1
        res = []
        for i in range(len(s)):
            cnt=0
            st = set()
            while True:
                if i>=len(s): break
                if s[i] not in st and i<len(s):
                    st.add(s[i])
                    i+=1
                    cnt+=1
                else: break
            res.append(cnt)
            if i>=len(s): break
        if res:
            ans=max(res)
        else: ans=0
        return ans
