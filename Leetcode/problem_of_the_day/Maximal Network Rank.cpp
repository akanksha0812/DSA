class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        // Create an adjacency matrix to represent connections between nodes
        vector<vector<int>> adj(n, vector<int>(n, 0));
        vector<int> indegree(n, 0);

        // Build the adjacency matrix and calculate node indegrees
        for (auto road : roads) {
            indegree[road[0]]++;
            indegree[road[1]]++;

            // Mark nodes as connected in the adjacency matrix
            adj[road[0]][road[1]] = 1;
            adj[road[1]][road[0]] = 1;
        }

        int ans = 0;

        // Calculate the maximal network rank by checking pairs of nodes
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int node1 = indegree[i];
                int node2 = indegree[j];

                int cnt = node1 + node2;

                // If there is a direct connection between nodes i and j, reduce the count
                if (adj[i][j] == 1) {
                    cnt--;
                }

                // Update the maximum network rank
                ans = max(ans, cnt);
            }
        }

        // Return the calculated maximal network rank
        return ans;
    }
};
