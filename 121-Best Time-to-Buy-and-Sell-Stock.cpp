class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //minimum price for buying
        int minimum = prices[0];
        int maxProfit = 0;
    
        for(int i = 0 ; i < prices.size() ;i++ ){
            if (minimum > prices[i])
            {
                minimum = prices[i];
            }
            else if(prices[i] - minimum > maxProfit ){
                maxProfit = prices[i] - minimum;
            }
        }
        return maxProfit;
        }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //find min
        int min=prices[0];
        int i;
        int ans;
        int profit;
        int index;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
                index=i;
                
                
            }
        }
         int max=prices[index];
        if(index==prices.size()-1)
        {
            ans=0;
            return ans;
        }

       else{
        
        for(int j=index+1;j<prices.size();j++)
                {
                    if(prices[j]>max)
                    {
                        max=prices[j];
                    }
                }
                profit=max-min;
                return profit;
    }
    }
};