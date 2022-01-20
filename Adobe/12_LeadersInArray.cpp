// QUESTION lINK - https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/

// Question - Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

//Solution -

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
         vector<int> v;
       int leader=a[n-1];
       v.push_back(leader);
       for(int i=n-2;i>=0;i--){
           if(a[i]>=leader){
               leader=a[i];
               v.push_back(leader); 
           }
       }
      
       sort(v.begin(),v.end(), greater<int>());
        return v;
    }
};
