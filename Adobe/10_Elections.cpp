// Question Link - https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/#

//Question - Given an array of names (consisting of lowercase characters) of candidates in an election. A candidate name in array represents a vote casted to the candidate. Print the name of candidate that received Max votes. If there is tie, print lexicographically smaller name.

//Solution -

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        map<string, int> omap;
        vector<string> vect;
        string str = "";
        int max = 0;
        
        for(int i = 0; i < n; i++) omap[arr[i]]++;
        
        for(auto i : omap){
            
            if(i.second > max){
                str = i.first;
                max = i.second;
            }
        }
        vect.push_back(str);
        vect.push_back(to_string(max));
        return vect;
        
        
    }
};
