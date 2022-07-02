class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        int wealthMax = 0;
        
        int wealth = 0;
        for(auto i = 0; i < n; i++) {
            for(auto j = 0; j < m; j++) {
                wealth += accounts[i][j];
            }
            wealthMax = max(wealth,wealthMax);
            wealth = 0;
        }
        
        return wealthMax;
    }
};