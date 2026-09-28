class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int l=0,r=0,cnt=0;
        while(l<players.size() && r<trainers.size()){
           if(players[l] <= trainers[r]){
               l=l+1;
               cnt++;
           }
           r=r+1;
        }
        return cnt;
    }
};