//Question Link- https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#

//Question - The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. 

//Solution -

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<pair<int, int>> st;
       st.push({price[0], 1});
       vector<int>v(n,1);
       for(int i=1;i<n;i++){
          int cur=price[i];
          int c=0;
          while(!st.empty() && st.top().first<=cur)
          {
              c+=st.top().second;
              st.pop();
          }
          v[i]+=c;
          st.push({cur, v[i]});
       }
       return v;
    }
};
