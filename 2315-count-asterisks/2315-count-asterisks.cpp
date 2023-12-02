class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        int gate = 0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='|')
                gate++;
            if(gate%2==0)
            {
                if(s[i]=='*')
                    ans++;
            }
        }
        return ans;
    }
};