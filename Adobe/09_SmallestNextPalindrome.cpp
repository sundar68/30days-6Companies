// Question Link - https://practice.geeksforgeeks.org/problems/next-higher-palindromic-number-using-the-same-set-of-digits5859/1/

//Question - Given a palindromic number N in the form of string. The task is to find the smallest palindromic number greater than N using the same set of digits as in N.

//Solution - 

class Solution{
  public:
    string nextPalin(string N) { 
        if(N.size() <= 3){
            return "-1";
        }
        int n=N.size();
        
        string half = N.substr(0,n/2);
        if( next_permutation( half.begin() , half.end() ) )
        {
            string ans=half;
            if(n&1)
            {
                ans+=N[n/2];
            }
            reverse(half.begin() , half.end());
            ans+=half;
            return ans;
        }
        return "-1";
    }
};

