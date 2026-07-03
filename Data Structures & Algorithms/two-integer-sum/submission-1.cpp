class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //bruteforce approach will take two pointers and simultaneously check the array of the sum
        // int n = nums.size();
        // for(int i=0;i<nums.size();i++){
        //     for(int j=1;j<nums.size();j++){
        //         if(i!=j && nums[i]+nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {0,0};

        //optimal approach would be using hashmap to store the number and subtract from target to see the reesult actually exists
        //in the hashmap if exist return the current number and one in hashmap as a pair

        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            int res = target - nums[i];
            if(mpp.count(res)){
                return {mpp[res],i};
            }
            mpp[nums[i]] = i;
        }

        return {};
        
    }
};
