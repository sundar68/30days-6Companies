//Question Link - https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1/

//Question - Given a matrix of size r*c. Traverse the matrix in spiral form.

//Solution -

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int total = r*c;
       int startingRow=0;
       int endingRow=r-1;
       int startingCol=0;
       int endingCol=c-1;
       
       vector<int> sp;
       int count = 0;
       while(count<total){
           for(int i=startingCol;i<=endingCol && count<total;i++){
               sp.push_back(matrix[startingRow][i]);
               count++;
           }
           startingRow++;
           for(int i = startingRow;i<=endingRow && count<total ;i++){
               sp.push_back(matrix[i][endingCol]);
               count++;
           }
           endingCol--;
           for(int i = endingCol;i>=startingCol && count<total ;i--){
               sp.push_back(matrix[endingRow][i]);
               count++;
           }
           endingRow--;
           for(int i=endingRow;i>=startingRow && count<total ;i--){
               sp.push_back(matrix[i][startingCol]);
               count++;
           }
           startingCol++;
       }
return sp;   
    }
};
