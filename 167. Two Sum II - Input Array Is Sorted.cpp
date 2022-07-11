//time O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> res;
            int left=0;
            int right=n-1;
            while(left<right){
                if(numbers[left]+numbers[right]== target){
                    res.push_back(left+1);
                    res.push_back(right+1);
                    break;
                }
                if(numbers[left]+numbers[right]>target){
                    right--;
                }
                if(numbers[left]+numbers[right]<target){
                    left++;
                }
            }
        return res;
    }
};
