class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        if(n!=m) return false;

        //brutoforce approach will be to iterate over t while standing on s idx to find out the word everytime we found a word will increment s and reset t pointer
        // sort the both strings and see if each character are equal or not
        // use hashmap to store s then check relatively for every character in t in hashmap

        unordered_map<int,char> npp;

        for(int i=0;i<n;i++){
            npp[s[i]]++;
        }

        for(int i=0;i<m;++i){
          if (npp[t[i]] == 0) {
            return false;
        }
            npp[t[i]]--;
        }
        return true;

    }
};
