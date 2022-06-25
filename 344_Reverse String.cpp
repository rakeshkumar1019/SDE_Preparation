// Question link: https://leetcode.com/problems/reverse-string/
// Complexity:
// time=O(n/2)
// space=o(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()<=1)return;
        int start=0;
        int end=s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return;
    }
};
