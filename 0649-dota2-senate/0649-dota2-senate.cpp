class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>qr,qd;
        int n=senate.size();
        for(int i=0; i<n; i++)
        {
            if(senate[i]=='R') qr.push(i);
            else qd.push(i);
        }
        while(!(qr.empty()||qd.empty()))
        {
            int index_r=qr.front();
                int index_d=qd.front();
            qr.pop(),qd.pop();
            if(index_r<index_d)
            {
                qr.push(n+index_r);
            }else 
            {
                qd.push(n+index_d);
            }
        }
        return qr.size()?"Radiant":"Dire";
    }
};