class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < 26; i++){
            int length = 0;
            int used = 0;
            int left = 0, right = 0;
            char c = 'A' + i;
            if(s.find(c)==string::npos)
                continue;
            
            while(right < n){
                if(left > 0 && s[left-1] != c){
                    used--;
                }
                while(right < n && (s[right] == c || used < k)){
                    if(s[right] != c){
                        used++;
                    }
                    right++;
                }

                length = max(length, right-left);
                left++;
            }
            
            ans = max(length, ans);

        }
        
        return ans;
    }
};