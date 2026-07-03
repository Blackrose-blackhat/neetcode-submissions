class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        //create a hsahmap to count the element freq
        unordered_map<int,int> mpp;

        //count freq of each element

        for(int num:nums){
            mpp[num]++;
        }

        //create a bucket to store the elements and count
        //first pair will be count and second wil be its value

        vector<vector<int>> bucket(nums.size()+1);

        for(const auto& pair:mpp){
            //first pair will be count of value
            //second pair will be values
            bucket[pair.second].push_back(pair.first);
        }

        //extract top k element by traversing the 
        //bucket from end if value appears the push into
        //result array do it k times 
    vector<int>result;
        for(int i=bucket.size()-1;i>=0;i--){
            for(int num:bucket[i]){
                result.push_back(num);
                if(result.size() == k) return result;
            }
        }

        return {};

    }
};
