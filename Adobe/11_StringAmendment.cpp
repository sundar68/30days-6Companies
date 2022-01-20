//Question Link - https://practice.geeksforgeeks.org/problems/amend-the-sentence3235/1

//Question - Given a string which is basically a sentence without spaces between words. However the first letter of every word is in uppercase. You need to print this sentence after following amendments: (i) Put a single space between these words  (ii) Convert the uppercase letters to lowercase.

//Solution -

class Solution{
    public:
    string amendSentence (string s)
    {
        string ans="";
        ans+=tolower(s[0]);
        for(int i=1;i<s.size();i++){
            if(isupper(s[i])){
                ans+=' ';
                ans+=tolower(s[i]);
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};

