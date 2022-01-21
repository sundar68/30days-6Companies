//Question Link- https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/

//Question - Given the total number of tasks N and a list of prerequisite pairs P, find if it is possible to finish all tasks.

//Solution -

class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    vector<vector<int>> graph(N);
        vector<int> indegree(N,0);
        for(auto c : prerequisites)
        {
            graph[c.second].push_back(c.first);
            indegree[c.first]++;
        }
        
        vector<int> toposort;
        queue<int> q;
        for(int i=0;i<N;i++)
        {
            if(indegree[i]==0) 
                q.push(i);
        }
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            toposort.push_back(curr);
            
            for(auto nbr: graph[curr])
            {
                indegree[nbr]--;
                if(indegree[nbr]==0) 
                    q.push(nbr);
            }
        }
        if(toposort.size()!=N) 
        	return false;
        	
        return true;
	}
};
