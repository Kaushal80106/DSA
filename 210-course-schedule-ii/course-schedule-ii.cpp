class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         const  int V = numCourses ;

        vector<vector<int>> adj(V);

        for(auto i : prerequisites) {
            adj[i[1]].push_back(i[0]);
        }

      vector<int> indegree(V,0);
        
       for(int i = 0 ;i<V;i++) {
           for(auto it : adj[i]) 
           {
               indegree[it]++;
           }
       }
       
       queue<int> q;
       
       for(int i = 0 ; i < V ;i++) {
           if(indegree[i] == 0) {
               q.push(i);
           }
       }
        vector<int> topo ;
       while(!q.empty()) {
           int node = q.front();
           q.pop();
           topo.push_back(node);
           
           for(auto it : adj[node]) {
               indegree[it]--;
               if(indegree[it] == 0) {
                   q.push(it);
               }
           }
       }
      
       if(topo.size() == V) return topo;
        return {} ;
    }
};