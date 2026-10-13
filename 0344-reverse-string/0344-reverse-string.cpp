class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int temp=s[0];
        s[0] = s[n-1];
        s[n-1]=temp;
        for(int i=1;i<n/2;i++){
          int temp1=s[i];
          s[i]=s[n-i-1];
          s[n-i-1]=temp1;
        }
        return ;
    }
};