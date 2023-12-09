class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
         transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
           string temp = "";
        unordered_map<string, int> mp;
        for(int i = 0; i < paragraph.size(); i++)
        {
            if(isalpha(paragraph[i]))
            {
                temp += paragraph[i];
            }
            else if(paragraph[i] == ' ' || paragraph[i] == ',')
            {
                if(temp != "")
                {
                    mp[temp]++;
                    temp = "";
                }
            }
        }
        mp[temp]++;
        temp = "";
        for(int i = 0; i < banned.size(); i++)
        {
            mp[banned[i]] = 0;
        }
        int n = INT_MIN;
        for(auto i : mp)
        {
            if(i.second > n)
            {
                temp = i.first;
                n = i.second;
            }
        }
        return temp;
    }
};