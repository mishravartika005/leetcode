class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        for(int i=0;i<magazine.size();i++){
            mpp[magazine[i]]++;
        }
        int i=0;
        for(int j=0;j<ransomNote.size();j++){
           if(mpp[ransomNote[j]] == 0)
               return false;
           mpp[ransomNote[j]]--;   
        }

        return true;
    }
};