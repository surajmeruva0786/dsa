class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int BB = prices[0];
        int MP = 0;
        for (int i=0;i<prices.size();i++){
            if (prices[i]>BB){
                MP = max(MP,prices[i]-BB);
            }
            BB = min(BB,prices[i]);
        }
        return MP;
    }
};

//time complexity: O(n)
//space complexity: O(1)