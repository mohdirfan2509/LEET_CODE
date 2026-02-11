class Solution {
public:
    
    void dfs(int u,vector<vector<int>>& g,vector<bool>& vis){
        vis[u]=true;
        for(int i=0;i<g[u].size();i++){
            int v=g[u][i];
            if(vis[v]==false){
                dfs(v,g,vis);
            }
        }
        return;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<vector<int>> g(n);
        for(int i=0;i<edges.size();i++){
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            vis[i]=false;
        }

        dfs(source,g,vis);
        return vis[destination];
    }
};