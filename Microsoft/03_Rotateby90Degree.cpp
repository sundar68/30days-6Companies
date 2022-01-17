//Question Link- https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/

//Question - Given a square matrix[][] of size N x N. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.

//Solution -

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    for(int i=0;i<matrix.size();i++){
        for(int j=i;j<matrix.size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    int u=0,d=matrix.size()-1;
    while(u < d){
        for(int j=0;j<matrix.size();j++){
            swap(matrix[u][j],matrix[d][j]);
        }
        u+=1;
        d-=1;
    }
}
