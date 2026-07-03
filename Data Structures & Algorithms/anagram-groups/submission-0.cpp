#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Result to store grouped anagrams
        vector<vector<string>> ans;

        // Map to group anagrams by character count
        unordered_map<string, vector<string>> mp;

        for (string& str : strs) {
            // Create a count array to store the frequency of each character (26 for lowercase letters)
            vector<int> count(26, 0);

            // Count the frequency of each character in the string
            for (char c : str) {
                count[c - 'a']++;
            }

            // Convert the count array to a string to use as a key
            string key = "";
            for (int k = 0; k < 26; ++k) {
                key += to_string(count[k]) + '#';  // '#' is used as a separator
            }

            // Group the original string using the frequency key
            mp[key].push_back(str);
        }

        // Extract the grouped anagrams into the result
        for (auto& pair : mp) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
