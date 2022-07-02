class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealthMax = 0;
        
        for(auto i = 0; i < accounts.size(); i++) {
            int wealth = 0;
            for(auto j = 0; j < accounts[i].size(); j++) {
                wealth += accounts[i][j];
            }
            wealthMax = max(wealth,wealthMax);
        }
        
        return wealthMax;
    }
};