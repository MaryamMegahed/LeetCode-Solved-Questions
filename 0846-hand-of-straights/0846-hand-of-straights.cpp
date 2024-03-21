class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        if(hand.size()%groupSize!=0)return false;
        for(int i=0; i<hand.size(); i++)
        {
            mp[hand[i]]++;
        }
        while(!mp.empty()){
        int start=mp.begin()->first;
        for(int i=0; i<groupSize; i++)
        {
            if(mp[start+i]==0)return false;
            mp[start+i]--;
            if(mp[start+i]==0)
            {
                mp.erase(start+i);
            }
        }
        }
        return true;
    }
};