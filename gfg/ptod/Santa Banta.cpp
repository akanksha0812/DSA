class Solution{
public:
    vector<int>primes;
    
    int dfs(int node , vector<bool>&visited,vector<vector<int>> &adj){
        if(visited[node]) return 0;
        visited[node] = true;
        int count = 1;
        for(auto neigh : adj[node]){
            if(!visited[neigh]){
                count += dfs(neigh,visited,adj);
            }
        }
        return count;
    }
    
    void precompute(){
        const int maxN = 1e6+5;
        vector<bool> is_prime(maxN , true);
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i * i <= maxN; i++) {
            if (is_prime[i]) {
                for (int j = i * i; j <= maxN; j += i)
                    is_prime[j] = false;
            }
        }
        for(int i = 2 ; i <= maxN ; i++){
            if(is_prime[i])primes.push_back(i);
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        if(m == 0) return -1;
        vector<bool>visited(n+1,0);
        int maxTrans = 1;
        for(int i = 1 ; i <= n ; i++){
            if(!visited[i]){
                maxTrans = max(maxTrans,dfs(i,visited,g));
            }
        }
        return primes[maxTrans-1];
    }
};
