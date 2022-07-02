class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int wealth = 0;
        int wealthMax = 0;
        
        for(auto i = 0; i < accounts.size(); i++) {
            for(auto j = 0; j < accounts[i].size(); j++) {
                wealth += accounts[i][j];
            }
            
            if (wealth > wealthMax)
                wealthMax = wealth;

            wealth = 0;
        }
        
        return wealthMax;
    }
};