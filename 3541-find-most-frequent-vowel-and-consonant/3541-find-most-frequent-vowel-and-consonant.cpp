class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mpp;
        int maxi1=0,maxi2=0;
        for(auto i : s){
            mpp[i]++;
        }
        for(auto i:mpp){
            if(i.first=='a' ||i.first == 'e' ||i.first== 'i' || i.first== 'o' ||i.first=='u'){
         
                maxi1 = max(maxi1, i.second);
            }
            else {
                maxi2 = max(maxi2, i.second);
            }

        }
            return maxi1+maxi2;
        
    }
};