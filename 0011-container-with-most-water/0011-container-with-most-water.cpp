class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxx=-1,n=height.size();
        int i=0,j=n-1;
        while(i!=j)
        {
            maxx=max(maxx,(j-i)*min(height[i],height[j]));
            if(height[i]<height[j])i++;
            else 
                j--;
        }
        return maxx;
    }
};