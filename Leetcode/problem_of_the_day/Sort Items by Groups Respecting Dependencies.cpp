class Solution {
public:
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        int groupId = m;
        for (int i = 0; i < n; i++) {
            if (group[i] == -1) {
                group[i] = groupId++;
            }
        }
        
        vector<vector<int>> itemGraph(n);
        vector<int> itemIndegree(n, 0);
        vector<vector<int>> groupGraph(groupId);
        vector<int> groupIndegree(groupId, 0);

        for (int i = 0; i < n; i++) {
            for (int prev : beforeItems[i]) {
                itemGraph[prev].push_back(i);
                itemIndegree[i]++;
                if (group[i] != group[prev]) {
                    groupGraph[group[prev]].push_back(group[i]);
                    groupIndegree[group[i]]++;
                }
            }
        }

        vector<int> itemOrder = topologicalSort(itemGraph, itemIndegree);
        vector<int> groupOrder = topologicalSort(groupGraph, groupIndegree);

        if (itemOrder.empty() || groupOrder.empty()) {
            return {};
        }

        vector<vector<int>> orderedGroups(groupId);
        for (int item : itemOrder) {
            orderedGroups[group[item]].push_back(item);
        }

        vector<int> answerList;
        for (int groupIndex : groupOrder) {
            answerList.insert(answerList.end(), orderedGroups[groupIndex].begin(), orderedGroups[groupIndex].end());
        }

        return answerList;
    }

    vector<int> topologicalSort(vector<vector<int>>& graph, vector<int>& indegree) {
        vector<int> result;
        queue<int> q;
        
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            result.push_back(curr);
            
            for (int neighbor : graph[curr]) {
                if (--indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        return result.size() == graph.size() ? result : vector<int>();
    }
};
