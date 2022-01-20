//Question Link - https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

//Question - Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

//Solution-

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>v;
        v.push_back(-1);
        for(int i=0;i<n;i++){
            long long k=0;
            int j=i;
            while(j < n){
                k+=arr[j];
                if(k >= s){
                    break;
                }
                j++;
            }
            if(k == s){
               v[0]=i+1;
               v.push_back(j+1);
               break;
            }
        }
        return v;
    }
};
