class Solution {
public:
    double average(vector<int>& salary) {
        double average=0;
        sort(salary.begin(),salary.end());
        int n=salary.size();
        for(int i=1; i<n-1; i++)
        {
            average+=salary[i];
        }
        average/=double(n-2);
        return average;
    }
};