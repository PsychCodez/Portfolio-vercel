vector<int> bfs(int  V, vector<int> adj[]){
    int vis[V]={0};
    vis[0]=1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node)

        for( auto it : adj[node]){
            if(!vis[it]){
                vis[it]=1
                q.push(it;)
            }
        }
    return bfs
    }
}
void dfs(int node, vector<int>adj[],int vis[],vector<int>&dfs){
    vis[node]=1;
    dfs.push_back(node);
    for(auto it : adj[node]){
        if(!vis[it]){
             dfs(it,adj,vis,dfs);
        }
    }
}
vector<int> dfs(int V, vector<int>adj[]){
    int vis[V]={0};
    int start=0;
    vector<int> dfs;
    dfs(start,adj,vis,dfs)

}