
class Compare {
public:
    bool operator()(pair<int, int> b, pair<int, int> a) {
        return a.first < b.first or (a.first == b.first and a.second < b.second);
    }
};

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> minElement;
        int n = costs.size();
        
        int i = 0, j = n - 1;
        while(i <= j and i < candidates) {
            minElement.push( {costs[i], i} );
            i++ ;
            if(i > j) {
                break;
            }

            minElement.push( {costs[j], j} );
            j-- ;
        }
        long long hiringCost = 0;
        int hiredWorkers = 0;
        while(hiredWorkers < k) {
            pair<int, int> currentHire = minElement.top();
            minElement.pop();
            
            hiringCost += currentHire.first;
            hiredWorkers++ ;

            if( i <= j ) {
                if(currentHire.second < i) {
                    minElement.push({costs[i], i});
                    i++ ;
                }
                else {
                    minElement.push({costs[j], j});
                    j-- ;
                }
            }
        }
        return hiringCost;
    }
};
