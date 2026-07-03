class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //bruteforce approach will take two pointers and simultaneously check the array of the sum
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size();j++){
                if(i!=j && nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {0,0};
        
    }
};
