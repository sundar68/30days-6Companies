// Question Link- https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/

//Question - Given an integer array arr of size N, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum and find the minimum difference

//Solution -

class Solution{

  public:
	int minDifference(int arr[], int n)  {
          int sum=0,i,j,ans,s1;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        s1=sum;
        sum=sum/2;
        vector<bool> dp(sum+1,false);
        dp[0]=true;
        for(i=0;i<n;i++)
        {
            for(j=sum;j>=arr[i];j--)
            {
                if(dp[j-arr[i]])
                {
                    dp[j]=true;
                }
            }
        }
        for(i=sum;i>=0;i--)
        {
            if(dp[i])
            {
                return (s1-(2*i));
            }
        }
        return 0;
	
           
	} 
};
