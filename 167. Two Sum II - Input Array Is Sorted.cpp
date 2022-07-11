//time O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> res;
            int left=0;
            int right=n-1;
            while(left<right){
            int addTwoElement=numbers[left]+numbers[right];
                if(addTwoElement== target){
                    res.push_back(left+1);
                    res.push_back(right+1);
                    break;
                }
                if(addTwoElement>target){
                    right--;
                }
                if(addTwoElement<target){
                    left++;
                }
            }
        return res;
    }
};
