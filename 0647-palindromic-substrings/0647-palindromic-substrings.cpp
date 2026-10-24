class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int i,j,g;
        int count=0;
        int t[n][n];
        for(g=0;g<n;g++){
            for(i=0,j=g;j<n;j++,i++){
                if(g==0) t[i][j] = true;
                else if(g==1) {
                    if(s[i] == s[j])
                      t[i][j] = true;
                    else 
                       t[i][j] =false;  
                }
                else {
                    if(s[i] == s[j] && t[i+1][j-1] == true) t[i][j] =true;
                    else t[i][j] =false;
                }
                if(t[i][j] == true) count++;
            }
        }
        return count;
    }
};