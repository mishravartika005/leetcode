class Solution {
public:
    int count(vector<int>& weights, int cap){
        int load=0,d=1;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i] >cap){
                d=d+1;
                load=weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        while(l<=h){
            int mid=(l+h)/2;
            int no_of_days=count(weights,mid);
            if(no_of_days<=days){
                h=mid-1;

            }
            else
            l=mid+1;
        }
        return l;
    }
};